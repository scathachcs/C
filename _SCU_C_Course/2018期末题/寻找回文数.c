#include<stdio.h>
#include<string.h>

struct number
{
	char b[40];
	int count;
};

int main ()
{
	int i,j,flag=0,n=0,k=0,m;
	char c[100];
	struct number num[100],num0;
	while(scanf("%s",c)!=EOF)
	{
		for(i=0;i<40;i++)
		{
			num[n].b[i]='\0';
		}
		flag=0,j=0;
		for(i=0;i<strlen(c);i++)
		{
			if(c[i]>='0'&&c[i]<='9')
			{
				num[n].b[j]=c[i];
				j++;
			}
	
		}
		 if(num[n].b[0]=='0'||strlen(num[n].b)<2)
         continue;
         
        for(i=0,j=strlen(num[n].b)-1;i<strlen(num[n].b),j>=0;i++,j--)
	    if(num[n].b[i]!=num[n].b[j])
	    {
	    	flag=1;
	    	break;
		}
        if(flag==1)
		continue;
		else
		{
		
			for(i=0;i<n;i++)
			{
			if(strcmp(num[i].b,num[n].b)==0)
			{
				num[i].count++;
				flag=1;
				break;
			}
		    }
		    if(flag==1)
		    {
		    	continue;
			}
		    else
			{
			num[n].count=1;
			n++;
			}
		}   
	}
	
	if(n==0)
	printf("None\n");
	else
	{
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n-1-i;j++)
	    if(num[j].count<num[j+1].count||(num[j].count==num[j+1].count&&(strlen(num[j].b)>strlen(num[j+1].b)||(strlen(num[j].b)==strlen(num[j+1].b)&&strcmp(num[j].b,num[j+1].b)>0))))
	    {
	    	num0=num[j];
	    	num[j]=num[j+1];
	    	num[j+1]=num0;
	    }
	}
	for(i=0;i<n;i++)
	if(num[i].count==num[0].count)
	printf("%s %d\n",num[i].b,num[i].count);
	}
return 0;
}
