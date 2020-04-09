#include<stdio.h>
#include<string.h>
int main ()
{
	char a[100],b[100],c[100];
	int i=0,j=0;
	scanf("%s %s",a,b);
	while(a[i]!='\0')
	{
		if((a[i]<58&&a[i]>47)||(a[i]<91&&a[i]>64)||(a[i]<123&&a[i]>96))
		{
			c[j]=a[i];
			i++;
			j++;
		}
		else
		i++;
	}
	i=0;
	while(b[i]!='\0')
	{
		if((b[i]<58&&b[i]>47)||(b[i]<91&&b[i]>64)||(b[i]<123&&b[i]>96))
		{
			c[j]=b[i];
			i++;
			j++;
		}
		else
		i++;
	}
	int l,n;
	char d;
	for(l=0;l<j-1;l++)
	{
		for(n=0;n<j-1-l;n++)
		if(c[n]>c[n+1])
		{
			d=c[n+1];
			c[n+1]=c[n];
			c[n]=d;
		}
		
	}
	puts(c);
	return 0;
} 
