#include<stdio.h> 
int main (void)
{int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
     {long a,b,c,d;
	 scanf("%d %d",&a,&b);
	 if(a<b)
     d=a,a=b,b=d;
	 c=a%b;
	 if(c==0)
	 printf("%d\n",b);
	 else
	 {while(c!=0)
	 {a=b;
	 b=c;
	 c=a%b;
	 }
	 printf("%d\n",b);
	 }
}return 0;
}


	 
	 
