#include<stdio.h>
int main ()
{
	int i;
	int b[5][10];
	int *pb=b[0];
	for(i=0;i<5*10;i++)
	{
		*(b[0]+i) = i;
	}
	printf("%d",b[4][9]);
	return 0;
 } 
