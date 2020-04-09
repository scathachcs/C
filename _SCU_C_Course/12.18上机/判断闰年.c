#include<stdio.h>
int main ()
{
	int n,m,i,j,k;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%d",&k);
		if(k<=0)
		{
			printf("no\n");
			continue;
		}
		if(k%400==0||(k%100!=0&&k%4==0))
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0; 
 } 
