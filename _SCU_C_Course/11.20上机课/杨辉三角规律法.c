#include<stdio.h>


int main ()
{ 
	int i,j,a;
	scanf("%d",&a);
	if(a>20||a<=0)
	printf("Input Error");
	else
	{
		int b[a][a];
		printf("1,\n");
		for(i=1;i<a;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(j==0||j==i)
				{
				b[i][j]=1;
				printf("%d,",b[i][j]);
			    }
				else
				{
					b[i][j]=b[i-1][j]+b[i-1][j-1];
					printf("%d,",b[i][j]);
				}
				if(j==i)
				printf("\n");
			}
		}
	}
	return 0;
}
