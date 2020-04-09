#include<stdio.h> 
int main ()
{
	char a[100],b[100];
	int i;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;;i++)
	{
	    if(a[i]!=b[i])
	    {
	    if(a[i]!='\0'||b[i]!='\0')
	    {
		
		    printf("%d",a[i]-b[i]);
		    break;
	    }
		else
		{
			if(a[i]=='\0') 
			{
			    printf("-%d",b[i]);
			    break;
		    }
			else
			{
			    printf("%d",a[i]);
			    break;
		    }
		} 
		} 
		else
		{if(a[i]=='\0'&&b[i]=='\0')	
		{
			printf("0");
			break;
		}
		} 
	    
	}
	return 0;
} 
