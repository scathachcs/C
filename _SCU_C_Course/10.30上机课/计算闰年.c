#include<stdio.h>
int main (void) 
{int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
     {int A;
	 scanf("%d",&A);
	 if(A>0) 
	 {   
	        if(A%400==0||(A%100!=0&&A%4==0)) 
	        printf("yes\n");
	        else
	        printf("no\n");
	 }
	 else
	 printf("no\n");
     }
return 0;
}
		
