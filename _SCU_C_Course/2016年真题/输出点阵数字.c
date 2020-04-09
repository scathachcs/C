#include<stdio.h>
#include<string.h>

int print(char x,int y);

int main ()
{
	char a[5];
	int i,j,m,n;
	scanf("%d",&n);
	gets(a);
	for(m=0;m<n;m++)
	{
		gets(a);
		printf("%s:\n",a);
		for(i=0;i<7;i++)
		{
			for(j=0;j<strlen(a);j++)
			{
				print(a[j],i);
			}
			printf("\n");
		}
	}
	return 0;
} 

int print (char x,int y)
{
   char a[8]="*****  ",b[8]="*   *  ",c[8]="    *  ",d[8]="*      ";
   if(y==0)
   {
   	switch (x)
   	{case '0': case '2': case '3': case '5': case '6': case '7': case '8': case '9':
   		printf("%s",a);
   		break;
   	case '1': 
   	    printf("%s",c);
   	    break;
   	case '4':
   		printf("%s",b);
   		break;} 
   }
   if(y==1||y==2)
   {
   	switch (x)
   	{case '0': case '4': case '8': case '9':
   		printf("%s",b);
   		break;
   	case '1':  case '2': case '3': case '7':
   	    printf("%s",c);
   	    break;
   	case '5':  case '6':
   		printf("%s",d);
   		break;} 
   }
   if(y==3)
   {
   	switch (x)
   	{case '4': case '2': case '3': case '5': case '6': case '8': case '9':
   		printf("%s",a);
   		break;
   	case '1':  case '7':
   	    printf("%s",c);
   	    break;
   	case '0':
   		printf("%s",b);
   		break;} 
   }
   if(y==4||y==5)
   {
   	switch (x)
   	{case '0': case '6': case '8':
   		printf("%s",b);
   		break;
   	case '1':  case '3': case '4': case '7': case '5': case '9':
   	    printf("%s",c);
   	    break;
   	case '2':
   		printf("%s",d);
   		break;} 
   }
   if(y==6)
   {
   	switch (x)
   	{case '0': case '2': case '3': case '5': case '6': case '8': case '9':
   		printf("%s",a);
   		break;
   	case '1': case '4': case '7':
   	    printf("%s",c);
   	    break;} 
   }
   return 0; 
    
}
