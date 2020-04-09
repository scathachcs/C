#include<stdio.h>
int jc(int n);

int main ()
{
	int n,m,i;
    long double a=1;
	scanf("%d",&m);
	if(m==1)
	printf("1");
	else
	{
		for(n=1;n<=(m-1);n++)
		{
			for(i=1;i<=n;i++)
			{
				a=a*jc(n)/(jc(i)*jc(n-i));
			}
		}
	}
	printf("%d",a);
	return 0;	
 } 
 
 int jc(int n)
 {
 	int i,a=1;
 	for(i=1;i<=n;i++)
 	a=a*i;
 	return a;
 }
