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
int n;        //n为节点总个数，被定义为全局变量，可被其他函数所用 
struct student *creat (void)//函数无形参 
{	struct student *head,*p1,*p2;
	head=NULL;n=0; //头指针置空，计数器清零 
	FILE *fp;
	if((fp=fopen("stu.txt","r"))==NULL)
	{
		printf("error\n");
		exit(1);
	 } 
	p1=p2=(struct student*)malloc(LEN);//p1,p2同时指向第一个节点 
	fscanf(fp,"%d %s %c %f",&p1->num,p1->name,&p1->sex,&p1->score);
	while(p1->num!=0) //学号为零时结束循环 
{ 	n=n+1;    //计数器加一 
	if(n==1)
	{   head=p1;  //若p1所指节点为第一个节点，令头指针指向它，即链接到表头
	    p1->next=NULL;
	    
	}
	else
		p2->next=p1;  //否则令表尾指针指向它，即链接到表尾 
	p2=p1;      //p2指向新表尾 
	p1=(struct student*)malloc(LEN) ;//申请一个新节点空间，使p1指向它 
	fscanf(fp,"%d %s %c %f",&p1->num,p1->name,&p1->sex,&p1->score);//输入新节点的数据 
} 
p2->next=NULL;       //最终表尾节点的指针域置空 
free(p1);            //释放p1所指向的内存空间
fclose(fp); 
return(head);        //返回头指针 
}

void print(struct student *head)//函数的形参head值为实参传来的链表的头指针 
{	struct student *p;
	printf("共有%d条学生记录，包括：\n",n);// n为全局变量 
	p=head;                    //使p1指向第一个节点 
	while(p!=NULL)        //p所指节点非空时循环 
	{	printf("\t%d\t%s\t%c\t%.1f\n",p->num,p->name,p->sex,p->score);//输出p所指节点的数据 
		p=p->next;            //使p指向下一个节点 
	}
}
struct student *del(struct student *head,int num) //形参num为要删除的节点数据与中的一个值
{	struct student *p1,*p2;
	if(head==NULL)
	{	printf("\nThe List is NULL!\n");
		return(head);	
	}    //链表为空时，输出提示信息后函数返回 
	p1=head;    //p1指向第一个节点 
	while(p1->num!=num&&p1->next!=NULL)   //p1所直接点不是要删除的节点，也不是尾节点
	{	p2=p1;
		p1=p1->next;  //p1后移一个节点 
	 } 
	if(p1->num==num)   //找到了要删除的节点 
	 {	if(p1==head)
	 		head=p1->next;     //若p1指向第一个节点，直接令head指向第二个节点
		else 
			p2->next=p1->next;   //否则令其前一个节点的next指针指向其后一个节点
		free(p1);           //释放p1所指节点空间 
		printf("Delete:%d\n",num);  //输出删除的数据 
		n=n-1;                   //节点数减1 
	 }
	else
	 	printf("%d is not been found!\n",num); //找不到该节点输出提示信息
	return(head);
 } 
struct student *insert(struct student *head,struct student *stud) //形参stud指向要插入的新节点
{	struct student *p0,*p1,*p2;
	p1=head;         //p1指向第一个节点
	p0=stud;         //p0指向新节点
	if(head==NULL)     //原链表为空 
	{	head=p0;p0->next=NULL;  //新节点作为第一个节点 
	 } 
	else
	{	while((p0->num>p1->num)&&(p1->next!=NULL)) //新节点数据大于当前节点数据并且当前节点不为尾节点 
		{	p2=p1;
		p1=p1->next;   //p2后移一个节点，p1后移一个节点 
		}
		if(p0->num<=p1->num)  //新节点数据小于等于当前节点数据
		{	if(head==p1)
			{   head=p0;
				p0->next=p1;
			}
			else
			{   p2->next=p0;
				p0->next=p1;
			};   //新节点next指针指向当前节点 
		}
	    else
	   {	p1->next=p0;
		    p0->next=NULL;   //新节点插到表尾节点之后（当前节点为表尾节点） 
	   }
}
	n=n+1;               //节点数加一 
	return(head);
}
int main()
{
	struct student *head,*stud;
	FILE *fp;
	int us,x,flag,i;
	printf("执行菜单\n");
	printf("按1读取学生信息\n");
	printf("按2插入学生信息\n");
	printf("按3删除某位学生信息\n");
	printf("按4查看学生信息\n");
	printf("按0退出程序,并储存\n");
	while(1)
	{	printf("输入指令\n");
		scanf("%d%*c",&x);
	switch(x)
		{	case 1:	
			{		printf("读取学生信息\n");head=creat();break;}	
			case 2:	
				{	printf("请插入\n");
					stud=(struct student*)malloc(LEN);
					scanf("\t%d%s %c %f",&stud->num,stud->name,&stud->sex,&stud->score);
					head=insert(head,stud);
					print(head);
					break;}
			case 3:	
				{	printf("请输入删除的记录标号\n"); 
					scanf("%d%*c",&us);
					head=del(head,us);
					print(head);
					break;}					
			case 4:	
				{	printf("输出记录\n");
					print(head);
					break;}
			case 0:
				{   flag=1;
				    if((fp=fopen("stu.txt","w"))==NULL)
				    {
				    	printf("error\n");
				    	exit(2);
					}
					for(i=0;i<n;i++)
					{
						fprintf(fp,"%d %s %c %f\n",head->num,head->name,head->sex,head->score);
						head=head->next;
					}
					fprintf(fp,"0 0 0 0\n");
					free(head); 
					fclose(fp);
					break;
				}	
		}
	if(flag==1)
	break;	
	} 
	return 0;
}
