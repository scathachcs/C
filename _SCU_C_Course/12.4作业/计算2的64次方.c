#include<stdio.h>
int main ()
{
	int a[100]={1};
	int i,j; 
	for(i=0;i<64;i++)
	{
		for(j=0;j<100;j++)
		{
			a[j]=a[j]*2;
		}
		for(j=0;j<100;j++)
		{
			if(a[j]>9)
			{
				a[j]=a[j]%10;
				a[j+1]=a[j+1]+1;
			}
		}
	}
	for(i=99;;i--)
	{
	if(a[i]!=0)
	break;}
	for(;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	
	return 0;
} 
