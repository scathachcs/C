#include<stdio.h> 
int main ()
{
	char a[100],b[100];
	char c[100];
	c[0]='\0';
	gets(a);
	gets(b);
	int i,j,k=0,n,m,flag;
	char x;
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n;i++)
	{
		flag=1;
	    for(j=0;j<m;j++)
	    {
		    if(a[i]==b[j])
		    flag=0;
	    }
	    if(flag==1)
	    {
		    c[k]=a[i];
		    k++;
	    }
    }
    c[k]='\0';
    if(c[0]=='\0')
    {
    	printf("null\n");
	}
	else
	{
		for(i=0;i<strlen(c);i++)
	    {
	for(j=0;j<(strlen(c)-i-1);j++)
	    {
	    if(c[j]>c[j+1])
	    {
	    	x=c[j];
	    	c[j]=c[j+1];
	    	c[j+1]=x;
		}
	    }
		}
		puts(c);
	}
	return 0;
}
	

