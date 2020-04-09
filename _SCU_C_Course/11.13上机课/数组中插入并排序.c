#include<stdio.h>
int main ()
{
	
	int t,i,d;
	scanf("%d",&d);
	int a[5]={1,3,5,7,d};
	for(i=3;i>=0;i--)
	{
	    if(a[i]>a[i+1])
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;	
		}
	}
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	return 0;
 } 
