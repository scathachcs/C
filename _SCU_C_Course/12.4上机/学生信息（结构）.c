#include<stdio.h>
struct Student 
{
       char name[20];
       int id;
       int math;
       int chinese;
       int sum;
};

int main ()
{
	int n,i,j;
	scanf("%d",&n);
	struct Student stu[n];
	struct Student st;
	for(i=0;i<n;i++)
	scanf("%s %d %d %d",stu[i].name,&stu[i].id,&stu[i].math,&stu[i].chinese);
	for(i=0;i<n;i++)
	stu[i].sum=stu[i].math+stu[i].chinese;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
		if(stu[j].sum<stu[j+1].sum)
		{
			st=stu[j];
			stu[j]=stu[j+1];
			stu[j+1]=st;
		}
		else if(stu[j].sum==stu[j+1].sum&&stu[j].id>stu[j+1].id)
		{
			st=stu[j];
			stu[j]=stu[j+1];
			stu[j+1]=st;
		}
	    }
	}
	for(i=0;i<n;i++)
	printf("%s %d\n",stu[i].name,stu[i].sum);
	return 0;
} 
