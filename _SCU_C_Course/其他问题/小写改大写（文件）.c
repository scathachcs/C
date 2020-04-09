#include<stdio.h>
#include<stdlib.h>
int main ()
{
	FILE *fp;
	if((fp=fopen("data.txt","w+"))==NULL)
	{
		printf("error");
		exit(1);
	}
	char a[100],b[100];
	int i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>96&&a[i]<123)
		a[i]=a[i]-32;
	}
	fprintf(fp,"%s",a);
	fseek(fp,0,0);
	fscanf(fp,"%s",b);
	puts(b);
	fclose(fp);
	return 0;
}
