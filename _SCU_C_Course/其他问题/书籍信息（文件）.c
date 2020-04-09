#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char name[20];
	int price;
	char author[20];
	char pbuliser[20];
} booktype;

int main()
{
	FILE *fp;
	if((fp=fopen("file_data.txt","w+"))==NULL)
	{
		printf("error");
		exit(1);
	}
	int n,i;
	scanf("%d",&n);
	booktype book[n],book1[n];
	for(i=0;i<n;i++)
	{
		scanf("%s %d %s %s",book[i].name,&book[i].price,book[i].author,book[i].pbuliser);
	}
	fwrite(book,sizeof(booktype),n,fp);
	fseek(fp,0,0);
	fread(book1,sizeof(booktype),n,fp);
	for(i=0;i<n;i++)
	{
		printf("%s %d %s %s\n",book1[i].name,book1[i].price,book1[i].author,book1[i].pbuliser);
	}
	fclose(fp);
	return 0;
 } 
