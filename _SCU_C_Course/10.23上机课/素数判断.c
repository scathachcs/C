#include<stdio.h>
int main (void)
{int a,i,c,n,f;
scanf("%d",&n);
for(f=1;f<=n;f++)
{
scanf("%d",&a);
if(a<=2)
{if(a==1)
printf("no\n");
 else
printf("yes\n");
}
else
{
for(i=2;i<a;i++) 
{c=a%i;
if(c==0)
{
printf("no\n");
break;
}
} 
if(c==1)
printf("yes\n");
}
}
return 0;
}
