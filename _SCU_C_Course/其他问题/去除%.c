#include <stdio.h>
int main ()
{
	int c;
	while((c=getchar())!='\n')
	{
		if(c!='%')
		printf("%c",c);
	}
	return 0;
 } 
