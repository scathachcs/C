#include <stdio.h>
int A(int n);
int main () 
{
	int i;
	for(i=1;i<=10;i++)
	printf("%d\n",A(i));
	return 0;
}

int A(int n)
{
	if(n>2)
	return 3*A(n-1)+A(n-2);
	else
	{
	if(n==1)
	return 10;
	else
	return (-3);
	}
	
}
