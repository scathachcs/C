#include<stdio.h>
#include<stdlib.h>
const int N=5;
struct student
{
	char id[10];
	char name[20];
	int a;
	int b;
	int c;
	int d;
 } ;
 int main ()
 {
 	FILE *fp;
 	struct student stud[N];
 	int i,j;
 	if((fp=fopen("stud.txt","w"))==NULL)
 	{
 		printf("error\n");
 		exit(1);
	}
	for(i=0;i<N;i++)
	{
		scanf("%s %s %d %d %d",stud[i].id,stud[i].name,&stud[i].a,&stud[i].b,&stud[i].c);
		stud[i].d=(stud[i].a+stud[i].b+stud[i].c)/3;
	}
	for(i=0;i<N;i++)
	{
		fprintf(fp,"%s %s %d %d %d %d",stud[i].id,stud[i].name,stud[i].a,stud[i].b,stud[i].c,stud[i].d);
	 } 
	fclose(fp);
	return 0;
 }
