#include<stdio.h> 
int main(void)
{int n,i;
     for(n=1;n<10;n++)
     {for(i=1;i<=n;i++)
         {printf("%d*%d=%d ",i,n,i*n);
          if(i==n)
          printf("\n");
		 }
	 }
	 return 0;
}
