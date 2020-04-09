#include<stdio.h>
int main ()
{
	int n,i,count=0,k,flag=1;
	double tot=0;
	char a[1000];
	scanf("%d",&n);
	gets(a);
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
         	continue;
		else if (a[i]=='n')
		{
			i+=2;
			continue;
		}
		else if(a[i]=='-')
		{
			flag=-1;
			continue;
		}
		else
		{
			k=k*10+a[i]-'0';
		}
		if(a[i]!=' '&&(a[i+1]==' '||a[i+1]=='\0'))
		{
			tot+=(k*flag);
			k=0;
			flag=1;
			count++;
		}
	}
	if(count!=0) 
	printf("%.2f\n",(tot/count));
	if(count==0)
	printf("n/a\n");
	return 0;
 } 
