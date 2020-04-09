#include<stdio.h>
int main ()
{
	struct stafftype
	{
		long staffnum;
		char *name;
		char *sex;
		long identitynum;
		int salary;
		char *address;
	};
	struct stafftype staff;
	char a[100],b[100],c[100];
	staff.name=a,staff.sex=b,staff.address=c;
	scanf("%d %s %s %d %d %s",&staff.staffnum,staff.name,staff.sex,&staff.identitynum,&staff.salary,staff.address);
	printf("职工号：%d.\n",staff.staffnum);
	printf("姓名：%s.\n",staff.name);
	printf("性别：%s.\n",staff.sex);
	printf("身份证号：%d.\n",staff.identitynum);
	printf("工资：%d.\n",staff.salary);
	printf("地址：%s.\n",staff.address);
	return 0;
} 
