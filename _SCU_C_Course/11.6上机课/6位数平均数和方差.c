#include<stdio.h>
int main (void)
{
float a[6],b,c,d;
int i,j,n;
scanf("%d",&n);
for(j=0;j<n;j++)
{
	d=0;
	b=0;
for(i=0;i<6;i++)
{
	scanf("%f",&a[i]);
}
for(i=0;i<6;i++)
{
	b+=a[i];
}
b=b/6.0;
for(i=0;i<6;i++)
{
	c=a[i]-b;
	d=d+c*c;
}
d/=6.0;
printf("%.2f %.2f\n",b,d);
}
return 0;
}

