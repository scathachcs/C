#include<stdio.h> 
#include<string.h>
int main ()
{
	char a[100],b[100];
	int i,j,len,n,m;
	scanf("%d",&n);
	gets(a);
	for(m=0;m<n;m++)
	{
		gets(a);
	    len=strlen(a);
	    for(i=0;i<strlen(b);i++)
	    b[i]='\0';
	    j=0;
	    for(i=0;i<len;i++)
	    {
	    	if(i%2==0)
	    	b[j]=(a[i]-48)*16;
	    	else
	    	{
	    		if(a[i]>47&&a[i]<58)
	    		b[j]+=a[i]-48;
	    		else
	    		b[j]+=a[i]-55;
	    		j++;
			}
		}
		b[j]='\0';
		puts(b);
		
	}
	return 0;
}
