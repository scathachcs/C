#include<stdio.h>
int main ()
{
	int n,m,j,i;
	long a[3],tem;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%ld %ld %ld",&a[0],&a[1],&a[2]);
		for(i=0;i<3;i++)
		for(j=0;j<2-i;j++)
		{
			if(a[j]>a[j+1])
			{
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
		}
		if(a[2]>=a[1]+a[0]||a[0]<=a[2]-a[1]||a[0]<=0||a[1]<=0||a[2]<=0)
		printf("No\n");
		else if(a[2]*a[2]==(a[1]*a[1]+a[0]*a[0]))
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
