#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,j,k,n,m,p,q,tem;
	scanf("%d",&n);
	gets(a);
	for(m=0;m<n;m++)
	{
	gets(a);
	j=0,k=0;
	int b[100],c[100];
	tem=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=32)
		{
			tem=tem*10+a[i]-48;
			if(a[i+1]==32||a[i+1]=='\0')
			{
			if(tem%2!=0)
			{
				b[j]=tem;
				j++;
				tem=0;
		    }
		    else
		    {
		    	c[k]=tem;
		    	k++;
		    	tem=0;
			}
		    }
		}
	}
	for(p=0;p<j;p++)
	{
		for(q=0;q<(j-p-1);q++)
		{
			if(b[q]>b[q+1])
			{
			    tem=b[q+1];
				b[q+1]=b[q];
				b[q]=tem;	
			}
		}
	}
	for(p=0;p<k;p++)
	{
		for(q=0;q<(k-p-1);q++)
		{
			if(c[q]>c[q+1])
			{
			    tem=c[q+1];
				c[q+1]=c[q];
				c[q]=tem;	
			}
		}
	}
	for(q=0;q<j;q++)
	printf("%d ",b[q]);
	for(q=0;q<k;q++)
	printf("%d ",c[q]);
	printf("\n");
    }
	
 } 
