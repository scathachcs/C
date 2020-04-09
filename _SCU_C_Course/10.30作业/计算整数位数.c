#include<stdio.h> 
int main(void)
{ long i=1,n,a=0,b=1;  
     printf("请输入一个整数："); 
     scanf("%d",&n);
     if(n==0) 
        printf("1");
     else{
        while(i!=0)
    {
        i=n/b;
        if(i!=0)
         {a++;} 
         b=b*10;
    } 
        printf("%d",a);
}
  return 0;    
 } 
