#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fpa,*fpb,*fpc;
	if((fpa=fopen("A.txt","r"))==NULL)
	{
		printf("error\n");
		exit(1);
	}
	if((fpb=fopen("B.txt","r"))==NULL)
	{
		printf("error\n");
		exit(1);
	}
	if((fpc=fopen("C.txt","w"))==NULL)
	{
		printf("error\n");
		exit(1);
	}
	char a[100],b[100],c[100];
	int i,j,k;
	fscanf(fpa,"%s",a);
	fscanf(fpb,"%s",b);
	c[0]='\0';
	strcat(c,a);
	strcat(c,b);
	fprintf(fpc,"%s",c);
	fclose(fpa);
	fclose(fpb);
	fclose(fpc);
	return 0;
	
 } 
