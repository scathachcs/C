#include<stdio.h>
int main ()
{
	int n,j,i,k,m;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&m);
		if(m==1)
		printf("1\n");
		else
		{
		int a[m][m];
		for(i=0;i<m;i++)
		{
			for(k=0;k<i+1;k++)
			{
				if(k==0||k==i)
				a[i][k]=1;
				else
				a[i][k]=a[i-1][k-1]+a[i-1][k];
				printf("%d ",a[i][k]);
			}
		printf("\n");
	    }
		}
		
	}
	return 0;
 } 
