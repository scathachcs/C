#include<stdio.h>
int main () 
{
	int n,i;
	double j=0;
	scanf("%d",&n);
	int a[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    	j=j+a[i];
	}
	j=j/n;
	printf("%.2f\n",j);
	return 0;
 } 
