#include<stdio.h> 
int prime(int n);

int main(void)
{   long c,n;
    printf("请输入一个数：");
	scanf("%d",&n);
	c=prime(n);
	printf("%d",c);
	return 0;
}

int prime(int n)
{int a=1,i;
 if(n<=1)
 return 0;
 else
 {for(i=2;i<n;i++)
  {a=n%i;
  if(a==0)
  break;
  }
  if(a==0)
  return 0;
  else
  return 1;
 }
}
 
