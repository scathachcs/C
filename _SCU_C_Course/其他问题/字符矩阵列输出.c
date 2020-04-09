#include<stdio.h> 
#include<string.h>
#define M 3
#define N 4
char b[M*N+1]; 

void fun(char a[M][N]);

int main(void)
{
	int q,w;
	char a[M][N];
	for(q=0;q<M;q++)
	{
		for(w=0;w<N;w++)
		scanf("%c",&a[q][w]);
	}
	fun(a);
	puts(b);
	return 0;

}

void fun(char a[M][N])
{
	int i,j,k=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			b[k]=a[j][i];
			k++;
		}
	}
}
