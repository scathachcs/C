#include<stdio.h> 
int main ()
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(n<=0||m<=0)
	printf("NO");
	else
	{
		int a[n][m];
		int i=0,j=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
		    scanf("%d",&a[i][j]);
			}
	    }
	    i=0,j=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d ",a[i][j]);
				if(j==m-1)
				printf("\n");
			}
		}
		i=0,j=0;
		for(j=0;j<m;j++)
		{
			for(i=0;i<n;i++)
			{
				printf("%d ",a[i][j]);
				if(i==n-1)
				printf("\n");
			}
	    }
	}
	return 0;
}
