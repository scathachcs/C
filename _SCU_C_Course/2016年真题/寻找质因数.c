#include<stdio.h>
int main()
{
	int i,j,k=1,m,n,x,flag;
	int a[1230]={2},b[14]={0};
	scanf("%d",&n);
	for(i=2;i<=10000;i++)
	{
		flag=0;
		for(j=0;a[j]!=0;j++)
		{
			if(i%a[j]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			a[k]=i;
			k++;
		}
	}
	for(m=0;m<n;m++)
	{
		k=0;
		scanf("%d",&x);
		for(i=0;i<14;i++)
		b[i]=0;
		for(i=0;x!=1;i++)
		{
			while((x%a[i])==0)
			{
				b[k]=a[i];
				x=x/a[i];
				k++;	
			}
		}
		for(i=0;b[i]!=0;i++)
		{
			if(b[i+1]==0)
			{
			printf("%d\n",b[i]);
			break;
		    }
			printf("%d",b[i]);
			printf("*");
		}
	}
	return 0;
 } 
 
