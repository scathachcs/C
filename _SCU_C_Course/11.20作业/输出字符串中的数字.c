#include<stdio.h>
int main ()
{
	char a[100];
	int i=0;
	scanf("%s",&a);
	while(a[i]!='\0')
	{
		if(a[i]>47&&a[i]<58)
		printf("%c",a[i]);
		if(a[i+1]=='\0')
		;
		else
		if((a[i]>47&&a[i]<58)&&(a[i+1]>57||a[i+1]<48))
		printf(",");
		i++;
	 } 
	return 0;
} 
