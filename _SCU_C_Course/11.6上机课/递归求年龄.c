#include<stdio.h>
int A(int e);
int n,a,k;
int main (void)
{   
     scanf("%d%d%d",&n,&a,&k);
     if(n>=2&&a>0&&k>0&&n<=100&&a<=100&&k<=100)
    { printf("%d",A(n));
    }
 else 
 printf("Wrong Number"); 
  return 0;
}

int A(int e)
{
if(e>=2)
  return k+A(e-1);
 else
  return a;
}
