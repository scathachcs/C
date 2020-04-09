#include<stdio.h>
#include<string.h>
struct Word
{
	char w[100];
	int count;
};
	
int main ()
{
	int i,j,k=0,m=0,n=0,flag=0;
	char a[100][100];
	struct Word word[100],x;
	while(scanf("%s",a[k])!=EOF)
	{
		k++;
	}
	for(i=0;i<k;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
		if(a[i][j]>='A'&&a[i][j]<='Z')
		a[i][j]=a[i][j]+'a'-'A';
		if(a[i][j]>'z'||a[i][j]<'a')
		a[i][j]='\0';
	    }
	}
	for(i=0;i<k;i++)
	{
		flag=0;
		for(m=0;m<n;m++)
		if(strcmp(a[i],word[m].w)==0)
		{
			word[m].count++;
			flag=1;
			break;
		}
		if(flag==1)
		{
			continue;
		}
		else
		{
			for(j=0;j<strlen(a[i]);j++)
			{
				word[n].w[j]=a[i][j];
			}
			word[n].w[j]='\0';
			word[n].count=1;
			n++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(word[j].count<word[j+1].count||(word[j].count==word[j+1].count&&strcmp(word[j].w,word[j+1].w)<0))
			{
				x=word[j];
				word[j]=word[j+1];
				word[j+1]=x;
			}
		}
	}
	printf("%s %d\n",word[0].w,word[0].count);
	return 0;
	
 } 
