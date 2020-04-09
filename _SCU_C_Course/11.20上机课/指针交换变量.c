#include<stdio.h>

void swapByPointer(int *A, int *B);

int main ()
{
	int *A,*B;
	int a,b;
	scanf("%d %d",&a,&b);
	A=&a,B=&b;
	swapByPointer(A,B); 
	printf("%d %d",*A,*B);
	return 0;
} 

void swapByPointer(int *A, int *B)
{
	int c;
	c=*A,*A=*B,*B=c;
}
