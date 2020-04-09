#include <stdio.h>
 long A (int a);
 
 int main (void)
 {  int a;
    long b;
      scanf("%d",&a);
      b=A(a);
      printf("%d",b);
      return 0;
      
 }
 
  long A (int a)
  {if (a>1)
  return a*A(a-1);
  else 
  return 1;
  }
