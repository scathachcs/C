#include<stdio.h>
#include<string.h>
int main()
{
	int m,n,i,k,p,q,t;
	char a[4][4];
	char str[100];
	scanf("%d",&n);
	gets(str);
	for(k=0;k<n;k++)
	{
		gets(str);
		for(p=0;p<4;p++)
		    for(q=0;q<4;q++)
		    a[p][q]='\0';
		p=0,q=0,t=0,m=0;
		for(i=strlen(str)-1;i>=0;i--)
		{
			if(q==3&&str[i]!='.')
			{
				m=66;
				break;
			}
			if(str[i]=='.')
			{
				p++;
				q=0;
				continue;
			}
			else
			{
				if(str[i]>57||str[i]<48)
				{
					m=66;
					break;
				}
				a[p][q]=str[i];
				q++;
			}
	    }
	    if(p!=3)
	    m=66;
	    for(p=0;p<4;p++)
		    if(a[p][0]=='\0')
		    m=66;
	    if(m==66)
	    {
	    	printf("no\n");
	    	continue;
		}
		for(p=0;p<4;p++)
		{
		    t=0;
			for(q=0;q<4;q++)
		    {
		    	if(a[p][q]!='\0')
		    	{
		            if(q==0)
					t=t+(a[p][q]-48);
				    else 
				    {
						if(q==1)
						{
				    	    t=t+(a[p][q]-48)*10;
				        }
				     	else
				    	t=t+(a[p][q]-48)*100; 
				    }        
				}
		    }
			if(t>255||t<0)
			{
				m=66;
				break;
			}
		}
		if(m==66)
	    {
	        printf("no\n");
		}	  
		else
		printf("yes\n");  
	}
	return 0;
} 
 
