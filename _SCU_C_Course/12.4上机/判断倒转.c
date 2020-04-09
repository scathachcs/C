#include<stdio.h>
int main ()
{
	int a,b,c;
	int i,n; int a1,a2,a3,a4,a5,c1,c2,c3,c4,c5,b1,b2,b3,b4,b5; 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d %d",&a,&b);
	if(a>10000||a<1||b>10000||b<1)
	{
		printf("NO\n");
	}
	else
	{
		c=a+b;
		c1=c%10;
		c2=(c%100)/10;
		c3=(c%1000)/100;
		c4=(c%10000)/1000;
		c5=c/10000;
		a1=a%10;
		a2=(a%100)/10;
		a3=(a%1000)/100;
		a4=(a%10000)/1000;
		a5=a/10000;
		b1=b%10;
		b2=(b%100)/10;
		b3=(b%1000)/100;
		b4=(b%10000)/1000;
		b5=b/10000;
		if(a5!=0)
		a=a1*10000+a2*1000+a3*100+a4*10+a5;
		else if(a4!=0)
		a=a1*1000+a2*100+a3*10+a4;
		else if(a3!=0)
		a=a1*100+a2*10+a3;
		else if(a2!=0)
		a=a1*10+a2;
		if(b5!=0)
		b=b1*10000+b2*1000+b3*100+b4*10+b5;
		else if(b4!=0)
		b=b1*1000+b2*100+b3*10+b4;
		else if(b3!=0)
		b=b1*100+b2*10+b3;
		else if(a2!=0)
		b=b1*10+b2;
		if(c5!=0)
		c=c1*10000+c2*1000+c3*100+c4*10+c5;
		else if(c4!=0)
		c=c1*1000+c2*100+c3*10+c4;
		else if(c3!=0)
		c=c1*100+c2*10+c3;
		else if(c2!=0)
		c=c1*10+c2;
		if(c==(a+b))
		printf("YES\n");
		else 
		printf("NO\n");
		}	
	} 
	return 0;
} 
