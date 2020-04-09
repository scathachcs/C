#include<stdio.h>
int main()
{
	int n,i,j,m,count;
	char a[100];
	scanf("%d",&n);
	gets(a);
	for(m=0;m<n;m++)
	{
		gets(a);
		count=0;
		for(i=0;a[i]!='\0';)
		{
			if(a[i]!='A'&&(a[i]!='S'||a[i+1]!='C'||a[i+2]!='U'))
	        {
	        	count=-1;
	        	break; 
			} 
			else if(a[i]=='A')
			i++;
			else
			{
				i+=3;
				count++;
			}
		}
		if(count==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
 } 
