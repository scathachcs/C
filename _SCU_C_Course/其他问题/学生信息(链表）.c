#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{	int  num;
    char name[20];
	char sex; 
	float score;
	struct student *next;
};
int n;        //nΪ�ڵ��ܸ�����������Ϊȫ�ֱ������ɱ������������� 
struct student *creat (void)//�������β� 
{	struct student *head,*p1,*p2;
	head=NULL;n=0; //ͷָ���ÿգ����������� 
	p1=p2=(struct student*)malloc(LEN);//p1,p2ͬʱָ���һ���ڵ� 
	scanf("\t%d%s %c %f",&p1->num,p1->name,&p1->sex,&p1->score);//�����һ���ڵ������ 
	while(p1->num!=0) //ѧ��Ϊ��ʱ����ѭ�� 
{ 	n=n+1;    //��������һ 
	if(n==1)
	{   head=p1;  //��p1��ָ�ڵ�Ϊ��һ���ڵ㣬��ͷָ��ָ�����������ӵ���ͷ
	    p1->next=NULL;
	    
	}
	else
		p2->next=p1;  //�������βָ��ָ�����������ӵ���β 
	p2=p1;      //p2ָ���±�β 
	p1=(struct student*)malloc(LEN) ;//����һ���½ڵ�ռ䣬ʹp1ָ���� 
	scanf("%d%s %c %f",&p1->num,p1->name,&p1->sex,&p1->score);//�����½ڵ������ 

} 
p2->next=NULL;       //���ձ�β�ڵ��ָ�����ÿ� 
free(p1);            //�ͷ�p1��ָ����ڴ�ռ� 
return(head);        //����ͷָ�� 
}
void print(struct student *head)//�������β�headֵΪʵ�δ����������ͷָ�� 
{	struct student *p;
	printf("����%d��ѧ����¼��������\n",n);// nΪȫ�ֱ��� 
	p=head;                    //ʹp1ָ���һ���ڵ� 
	while(p!=NULL)        //p��ָ�ڵ�ǿ�ʱѭ�� 
	{	printf("\t%d\t%s\t%c\t%.1f\n",p->num,p->name,p->sex,p->score);//���p��ָ�ڵ������ 
		p=p->next;            //ʹpָ����һ���ڵ� 
	}
}
struct student *del(struct student *head,int num) //�β�numΪҪɾ���Ľڵ��������е�һ��ֵ
{	struct student *p1,*p2;
	if(head==NULL)
	{	printf("\nThe List is NULL!\n");
		return(head);	
	}    //����Ϊ��ʱ�������ʾ��Ϣ�������� 
	p1=head;    //p1ָ���һ���ڵ� 
	while(p1->num!=num&&p1->next!=NULL)   //p1��ֱ�ӵ㲻��Ҫɾ���Ľڵ㣬Ҳ����β�ڵ�
	{	p2=p1;
		p1=p1->next;  //p1����һ���ڵ� 
	 } 
	if(p1->num==num)   //�ҵ���Ҫɾ���Ľڵ� 
	 {	if(p1==head)
	 		head=p1->next;     //��p1ָ���һ���ڵ㣬ֱ����headָ��ڶ����ڵ�
		else 
			p2->next=p1->next;   //��������ǰһ���ڵ��nextָ��ָ�����һ���ڵ�
		free(p1);           //�ͷ�p1��ָ�ڵ�ռ� 
		printf("Delete:%d\n",num);  //���ɾ�������� 
		n=n-1;                   //�ڵ�����1 
	 }
	else
	 	printf("%d is not been found!\n",num); //�Ҳ����ýڵ������ʾ��Ϣ
	return(head);
 } 
struct student *insert(struct student *head,struct student *stud) //�β�studָ��Ҫ������½ڵ�
{	struct student *p0,*p1,*p2;
	p1=head;         //p1ָ���һ���ڵ�
	p0=stud;         //p0ָ���½ڵ�
	if(head==NULL)     //ԭ����Ϊ�� 
	{	head=p0;p0->next=NULL;  //�½ڵ���Ϊ��һ���ڵ� 
	 } 
	else
	{	while((p0->num>p1->num)&&(p1->next!=NULL)) //�½ڵ����ݴ��ڵ�ǰ�ڵ����ݲ��ҵ�ǰ�ڵ㲻Ϊβ�ڵ� 
		{	p2=p1;
		p1=p1->next;   //p2����һ���ڵ㣬p1����һ���ڵ� 
		}
		if(p0->num<=p1->num)  //�½ڵ�����С�ڵ��ڵ�ǰ�ڵ�����
		{	if(head==p1)
			{   head=p0;
				p0->next=p1;
			}
			else
			{   p2->next=p0;
				p0->next=p1;
			};   //�½ڵ�nextָ��ָ��ǰ�ڵ� 
		}
	
	else
	{	p1->next=p0;
		p0->next=NULL;   //�½ڵ�嵽��β�ڵ�֮�󣨵�ǰ�ڵ�Ϊ��β�ڵ㣩 
	}
}
	n=n+1;               //�ڵ�����һ 
	return(head);
}
int main()
{
		struct student *head,*stud;
	int us,x;
	printf("ִ�в˵�\n");
	printf("��1������ѧ����Ϣ\n");
	printf("��2����ѧ����Ϣ\n");
	printf("��3ɾ��ĳλѧ����Ϣ\n");
	printf("��4�鿴ѧ����Ϣ\n");
	printf("��0�˳�����\n");
	while(1)
	{	printf("����ָ��\n");
		scanf("%d%*c",&x);
		if(x==0)
		break; 
	switch(x)
		{	case 1:	
			{		printf("������ѧ����Ϣ\n");head=creat();break;}	
			case 2:	
				{	printf("�����\n");
					stud=(struct student*)malloc(LEN);
					scanf("\t%d%s %c %f",&stud->num,stud->name,&stud->sex,&stud->score);
					head=insert(head,stud);
					print(head);
					break;}
			case 3:	
				{	printf("������ɾ���ļ�¼���\n"); 
					scanf("%d%*c",&us);
					head=del(head,us);
					print(head);
					break;}					
			case 4:	
				{	printf("�����¼\n");
					print(head);
					break;}
		}
	
			
	} 
	return 0;
}
	
	
	
