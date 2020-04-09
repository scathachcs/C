#include<stdio.h>
int main ()
{
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	int i,j,c=0;
	if(a[i]!=b[j])
	i++;
	while(b[j]!='\0')
	{
		if(a[i]==b[j])
		{
			c=1;
			i++,j++;
		}
		else
		{
			if(b[j]!=a[i])
			c=0;
			break;
		}
	}
	if(c==1)
	printf("YES");
	else
	printf("NO");
	return 0;
} 
