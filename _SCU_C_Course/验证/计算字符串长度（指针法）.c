#include<stdio.h>
int main ()
{
	char *a,*b;
	char c[] = "zxcvbnm";
	a=&c,b=&c;
	while(*a ++);
	printf("%d",a-b);
	return 0;
 } 
