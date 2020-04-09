#include<stdio.h>

int main ()
{
	int n,m,i,j,k,rank,tem;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{	
	    scanf("%d",&k);
		int a[k];
		j=0;
		while(j<k)
		{
			scanf("%d",&a[j]);
			j++;
		}
		for(i=0;i<k;i++)
		{
			for(j=0;j<k-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					tem=a[j+1];
					a[j+1]=a[j];
					a[j]=tem;
				}
			}
		}
		for(i=0;i<k;i++)
		{
			rank=1;
			for(j=0;j<k;j++)
			{
				if(j>0&&a[j]==a[j-1])
				continue;
				if(a[i]>a[j])
				{
					rank++;
				}
			}
			if(rank==2)
			break;
		}
		if(rank==2)
		printf("%d\n",a[i]);
		else
		printf("ERROR\n");
	}
	return 0;
}
