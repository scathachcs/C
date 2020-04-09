#include<stdio.h>

long long N(int n);

int main ()
{
	double a;
	int i,j;
	scanf("%lf",&a);
	if((a/1.0)!=(int)a)
	printf("Input Error");
	else
	{
	
	if(a>20||a<=0)
	printf("Input Error");
	else
	{
		printf("1\n");
		for(i=1;i<a;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("%d,",N(i)/(N(j)*N(i-j)));
			}
			printf("\n");
		}
	}
		
	}
	return 0;
} 

long long N(int n)
{
	long i=1,j=1;
	if(n==0)
	j=1;
	else
	{
	for(i=1;i<=n;i++)
	{
		j*=i;
	}
    }
	return j;
}
