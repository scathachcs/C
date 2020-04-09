#include<stdio.h>
int main (void) 
{int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
     {long A;
	 scanf("%d",&A);
          if(A>99&A<1000)
          {int a,b,c;
           a=A/100;
           b=A%100/10;
           c=A%10;
           printf("%d,%d,%d\n",c,b,a);
		  }
		  else
		  printf("illegal\n");
     }  
}
