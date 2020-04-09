#include<stdio.h>
int main ()
{
	int n,m,i,k;
	double max,min,mid;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%d",&k);
		if(k<0) 
		{
			printf("ERROR\n");
			continue;
		}
		max=k,min=0,mid=(max+min)/2.0;
		for(i=0;i<100;i++)
		{
			if((mid*mid)<k)
			{
				min=mid;
				mid=(mid+max)/2.0;
			}
			if((mid*mid)>k)
			{
				max=mid;
				mid=(mid+min)/2.0;
			}
			if((mid*mid)==k)
			{
				break;
			}
		}
		printf("%.2lf\n",mid);
	}
	return 0;
 } 
