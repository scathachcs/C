#include<stdio.h>
struct datetype
{
	int y;
	int m;
	int d; 
};
int main()
{
	int a,b,z,d,i;
	long x[2];
	int c[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int s[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	struct datetype date[2];
	scanf("%d %d %d",&date[0].y,&date[0].m,&date[0].d);
	scanf("%d %d %d",&date[1].y,&date[1].m,&date[1].d);
	a=(date[0].y-1)/4;
	b=(date[0].y-1)/100;
	z=(date[0].y-1)/400;
	d=a-b+z;
	x[0]=date[0].d;
	for(i=0;i<date[0].m-1;i++)
	{
		if(date[0].y%400==0||(date[0].y%100!=0&&date[0].y%4==0))
		x[0]+=s[i];
		else
		x[0]+=c[i];
	}
	x[0]+=d*366+(date[0].y-d-1)*365;
	a=(date[1].y-1)/4;
	b=(date[1].y-1)/100;
	z=(date[1].y-1)/400;
	d=a-b+z;
	x[1]=date[1].d;
	for(i=0;i<date[1].m-1;i++)
	{
		if(date[1].y%400==0||(date[1].y%100!=0&&date[1].y%4==0))
		x[1]+=s[i];
		else
		x[1]+=c[i];
		
	}
	x[1]+=d*366+(date[1].y-d-1)*365;
	printf("%d",x[0]-x[1]);
	return 0;
}


