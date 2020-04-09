#include<stdio.h>
int main ()
{
	int n,m,j,i,flag;
	scanf("%d",&n);
	int a[n],b[n];
	for(m=0;m<n;m++)
	{
		scanf("%d",&a[m]);
		if(a[m]<0)
		b[m]=-a[m];
		else
		b[m]=a[m];	
	}
	for(i=0;i<n;i++)
	{
		flag=1;
		for(j=0;j<n;j++)
		if(b[i]<b[j])
		{
			flag=0;
			break;
		}
		if(flag==1)
		break;
	}
	printf("%d",a[i]);
	return 0;
}
