#include<stdio.h>
int main ()
{
	long i,j,n,a[2],flag,k;
	scanf("%d",&n);
	if(n<=6||n%2!=0)
	printf("ERROR\n");
	else
	{
		a[0]=(n/2);
		if(a[0]%2==0)
		{
			k=a[0]-1;
		}
		else
		k=a[0];
		a[0]=3;
		for(;;)
		{
		flag=1;
		if(a[0]>k)
		break;
		for(i=2;i<a[0];i++)
		{
			if(a[0]%i==0)
			{
				flag=0;
				break;
			}
		}
			a[1]=n-a[0];
			for(j=2;j<a[1];j++)
			{
				if(a[1]%j==0)
			{
				flag=0;
				break;
			}
			}
			if(flag==0||a[1]==a[0])
			{
				a[0]=a[0]+2;
				continue;
			}
			if(flag==1)
			{
				printf("%d %d\n",a[0],a[1]);
				a[0]=a[0]+2;
				continue;
			}
		}
	
	}
	return 0;
}
