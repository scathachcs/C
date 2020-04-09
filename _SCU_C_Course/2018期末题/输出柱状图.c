#include<stdio.h>

struct gra
{
	int a;
	char b;
};

int main ()
{
	int i,j,m,min=0,max=0,k;
	char c[4];
	scanf("%d",&m);
	struct gra g[m];
	for(i=0;i<m;i++)
	{
		g[i].b='+';
		scanf("%s",c);
		if(c[0]=='-')
		{
			sscanf(c,"%d%n",&g[i].a,&k);
			if(c[k]!='\0')
			g[i].b=c[k];
			if(min>g[i].a)
			min=g[i].a;
		}
		else
		{
			sscanf(c,"%d%n",&g[i].a,&k);
			if(c[k]!='\0')
			g[i].b=c[k];
			if(max<g[i].a)
			max=g[i].a;
		}	
	}
	for(i=max;i>0;i--)
	{
		for(j=0;j<m;j++)
		{
		if(g[j].a>=i)
		{
		if(j==(m-1))
		printf("%c\n",g[j].b);
		else
		printf("%c ",g[j].b);
		}
		else
		{
		if(j==(m-1))
		printf(" \n");
		else
		printf("  ");	
		}
	    }
	}
	for(j=0;j<m;j++)
	{
		if(j==(m-1))
		printf("-\n");
		else
		printf("--");
	}
	for(i=-1;i>=min;i--)
	{
		for(j=0;j<m;j++)
		{
		if(g[j].a<=i)
		{
		if(j==(m-1))
		printf("%c\n",g[j].b);
		else
		printf("%c ",g[j].b);
		}
		else
		{
		if(j==(m-1))
		printf(" \n");
		else
		printf("  ");	
		}
	    }
	}
	return 0;
}
