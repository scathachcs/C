#include<stdio.h> 
int main ()
{
	int n,m,j,i,k,t;
	scanf("%d",&n);
    for(m=0;m<=n;m++)
    {
    	char a[100];
    	if(m==0)
    	{
    	gets(a);
		continue;	
		}
    	gets(a);
    	k=0;
    	t=strlen(a);
    	for(i=0;i<t;i++)
    	{
    		if(a[i]!=' '&&(a[i+1]==' '||a[i+1]=='\0'))
    		k++;
		}
		printf("%d\n",k);
	}
	return 0;
}
