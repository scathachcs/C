#include<stdio.h>
int main ()
{
	int n,m,i,j,k;
	scanf("%d",&n);
	m=(n+1)/2;
	for(j=0;j<m;j++)
	{
		for(k=0;k<m-j;k++)
		printf(" ");
		for(i=0;i<(j+1)*2-1;i++)
		printf("*");
		printf("\n");
		
	}    
	for(j=m-2;j>=0;j--)
	{
		for(k=0;k<m-j;k++)
		printf(" ");
		for(i=0;i<(j+1)*2-1;i++)
		printf("*");
		printf("\n");
	}
	return 0;
} 
