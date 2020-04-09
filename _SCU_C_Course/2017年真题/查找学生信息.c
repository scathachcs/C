#include<stdio.h>
#include<string.h>

typedef struct
{
	char name[10];
	char id[20];
	char score[4];
	int s; 
	int r;
} stud;

int main ()
{
	int n,j,i,k,flag;
	stud stu[100];
	char a[100];
	scanf("%d %s",&n,&a);
	for(i=0;i<n;i++)
	{
		scanf("%s %s %s",stu[i].name,stu[i].id,stu[i].score);
		stu[i].r=1;
		stu[i].s=-1;
		if(stu[i].score[0]!='n')
		sscanf(stu[i].score,"%d",&stu[i].s);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(stu[i].s<stu[j].s)
			stu[i].r++;
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]<48||a[i]>57)
		{
			flag=-1;
			break;
		}
	}
	if(flag!=-1)
	{   
	    sscanf(a,"%d",&k);
		for(i=0;i<n;i++)
		{
			if(k==stu[i].s)
			{     
			    printf("%s %s %s %d\n",stu[i].name,stu[i].id,stu[i].score,stu[i].r);
			    continue;
			}
			else if(strstr(stu[i].id,a)!=NULL)
			{
				if(stu[i].s!=-1)
				printf("%s %s %s %d\n",stu[i].name,stu[i].id,stu[i].score,stu[i].r);
				else
				printf("%s %s %s n/a\n",stu[i].name,stu[i].id,stu[i].score);
			}
		}
	}
	else
	{   
	    for(i=0;i<n;i++)
		{
		if(strstr(stu[i].id,a)!=NULL)
		{
			if(stu[i].s!=-1)
				printf("%s %s %s %d\n",stu[i].name,stu[i].id,stu[i].score,stu[i].r);
			else
				printf("%s %s %s n/a\n",stu[i].name,stu[i].id,stu[i].score);
			continue;
		}
		if(strstr(stu[i].name,a)!=NULL)
		{
			if(stu[i].s!=-1)
				printf("%s %s %s %d\n",stu[i].name,stu[i].id,stu[i].score,stu[i].r);
			else
				printf("%s %s %s n/a\n",stu[i].name,stu[i].id,stu[i].score);
		}
	    }
	}
	return 0;
 } 
