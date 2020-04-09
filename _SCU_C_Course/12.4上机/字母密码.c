#include<stdio.h>
#include<string.h> 
int main ()
{
	int n,i,j;
	char a[100];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>64&&a[i]<87)||(a[i]>96&&a[i]<119))
		a[i]=a[i]+4;
		else
		{
			if((a[i]>86&&a[i]<91)||(a[i]>118&&a[i]<123))
			a[i]=a[i]-22;
		}
	}
	puts(a);
	return 0;
} 
