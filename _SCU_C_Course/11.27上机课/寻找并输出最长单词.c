#include<stdio.h>
#include<string.h>
int main ()
{
	int i,j,p,q,m,n,k;
	char a[100];
	scanf("%d",&n);
	gets(a);
	for(m=0;m<n;m++)
	{
    	gets(a);
	    int c[100][2]={0};
	    q=0,p=0,k=0,j=0;
    	for(i=0;i<strlen(a);i++)
    	{
    		if((a[i]!=32&&a[i]<65)||(a[i]>90&&a[i]<97)||a[i]>122)
    		{
    			printf("Input Error\n");
    			i=-1;
    			break;
			}
    		if((a[i+1]==' '||a[i+1]=='\0')&&a[i]!=' ')
    		{
    			p=i+1;
			}
			if(a[i-1]==' '&&a[i]!=' ')
			{
				q=i;
			}
			if((p-q)>=k)
    		{
    			k=p-q;
    			c[j][0]=q;
    			c[j][1]=p;
    			p=0;
    			q=0;
				j++;
			}
    	}
    	if(i==-1)
    	continue;
    	for(j=0;j<100;j++)
    	{
    		if((c[j][1]-c[j][0])==k)
    		{
			    for(i=c[j][0];i<c[j][1];i++)
    		    printf("%c",a[i]);
    		    printf(",");
    	    }
		}
		printf("\n");
	}
	return 0;
 } 
