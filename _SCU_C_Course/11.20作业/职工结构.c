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
	printf("ְ���ţ�%d.\n",staff.staffnum);
	printf("������%s.\n",staff.name);
	printf("�Ա�%s.\n",staff.sex);
	printf("���֤�ţ�%d.\n",staff.identitynum);
	printf("���ʣ�%d.\n",staff.salary);
	printf("��ַ��%s.\n",staff.address);
	return 0;
} 
