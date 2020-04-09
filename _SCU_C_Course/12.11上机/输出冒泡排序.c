#include<stdio.h>
int main ()
{
	int i,j,k,n,m;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d%*c",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		if(a[j]>a[j+1])
		{
			m=a[j];
			a[j]=a[j+1];
			a[j+1]=m;
		}
		for(k=0;k<n;k++)
		printf("%d ",a[k]);
		printf("\n");
		
	}
	return 0;
}
 
