#include <stdio.h> 
int Sy(int a);

int main (void)
{int a,b,c,e,i;
 int f[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int g[12]={31,29,31,30,31,30,31,31,30,31,30,31};
     scanf("%d%d%d",&a,&b,&c);
     if (Sy(a)==0)
         {
		 for(i=0;i<(b-1);i++)
         e=e+f[i];
         }
         else
         {
		 for(i=0;i<(b-1);i++)
         e=e+g[i];
         }
         printf("%d",e+c); 
return 0;
     
}

int Sy(int a)
 {
 int s;
if(a%4!=0||(a%100==0&&a%400!=0))
s=0;
else 
s=1;
return s;
}
