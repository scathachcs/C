#include<stdio.h>
#include<string.h>

typedef struct
{
	char name[11];
	char id[19];
	char score[3];
	int s; 
} stud;

int main ()
{
	int n,m,j,i;
	stud stu[100],stu01;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%s %s %s",stu[m].name,stu[m].id,stu[m].score);
		if(stu[m].score[0]=='n')
		{
		m=m-1;
		n--;} 
		else 
		sscanf(stu[m].score,"%d",&stu[m].s);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
			if(stu[j].s<stu[j+1].s||(stu[j].s==stu[j+1].s&&strcmp(stu[j].name,stu[j+1].name)>0))
			{
				stu01=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=stu01;
			}	
		}
	}
	printf("%s %s\n%s %s\n",stu[0].name,stu[0].id,stu[m-1].name,stu[m-1].id);
	return 0;
 } 
