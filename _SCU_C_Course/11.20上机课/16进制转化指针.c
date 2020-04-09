#include<stdio.h>
int hexToDecimal(char* hex);
int main ()
{
	char *hex;
	char a[6];
	hex=a;
	scanf("%s",a);
	printf("%d",hexToDecimal(hex));
	return 0;
} 

int hexToDecimal(char* hex)
{
	int b[4],i;
	for(i=0;i<4;i++)
	{
		if(*(hex+2)>47&&*(hex+2)<58)
		b[i]=*(hex+i+2)-48;
		else
		b[i]=*(hex+i+2)-87;
	}
	return b[3]+b[2]*16+b[1]*16*16+b[0]*16*16*16;
} 
