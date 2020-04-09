#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>
#define stop 'p' 

void welcome();  
void Finish();             
void creatgraph();            
void gotoxy(int x, int y);    
void gotoprint(int x, int y); 
void gotodelete(int x, int y);
void creatfood();             
int ClickControl();           
int Judge();                  
void MovingBody();      
void Eating();             
void ChangeBody(int a,int b);
void explation();
void setup();
void scoredata ();
void show();
typedef struct Snakes
{
	int x;
	int y;
	struct Snakes *next;
}snake;
snake *head,*tail;

struct Food
{
	int x;
	int y;
}food;
FILE *fp;
char name[20];
int score = 0;
char click = 1;
int speed=180;
int color(int c)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);        //更改文字颜色
 return 0;
}
void HideCursor()
{
CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
int main()

{	HideCursor();
	welcome();
	if (ClickControl() == 0) return 0;
	return 0;

}

void gotoxy(int x, int y)
{	COORD pos;
	HANDLE hOutput;
	pos.X = x;	
	pos.Y = y;	
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);}

void gotoprint(int x, int y)
{
	gotoxy(x, y);
	printf("■");
}
void gotoprintf(int x, int y)
{
	gotoxy(x, y);
	printf("⊙");
}

void gotodelete(int x, int y)
{
	gotoxy(x, y);
	printf("  ");
}

void welcome()
 {	
 	int n;
	int i,j = 1;	
	gotoxy(35,1);
	color(6);
	printf("/^\\/^\\");      //蛇眼睛

	gotoxy(34,2);
	printf("|__|  O|");      //蛇眼睛

	gotoxy(33,2);
	color(2);
	printf("_");

	gotoxy(25,3);
	color(12);
	printf("\\/");      	//蛇信

	gotoxy(31,3);
	color(2);
	printf("/");

	gotoxy(37,3);
	color(6);
	printf(" \\_/");     	//蛇眼睛

	gotoxy(41,3);
	color(10);
	printf(" \\");

	gotoxy(26,4);
	color(12);
	printf("\\____");   	//舌头

	gotoxy(32,4);
	printf("_________/");

	gotoxy(31,4);
	color(2);
	printf("|");

	gotoxy(43,4);
	color(10);
	printf("\\");

	gotoxy(32,5);
	color(2);
	printf("\\_______");    //蛇嘴

	gotoxy(44,5);
	color(10);
	printf("\\");
	color(1);
	gotoxy(39,6);
	printf("|     |                  \\");  //下面都是画蛇身 
	color(2);
	gotoxy(38,7);
	printf("/      /                   \\");
	color(3);
	gotoxy(37,8);
	printf("/      /                    \\ \\");
	color(4);
	gotoxy(35,9);
	printf("/      /                       \\ \\");
	color(5);
	gotoxy(34,10);
	printf("/     /                          \\  \\");
	color(6);
	gotoxy(33,11);
	printf("/     /             _----_         \\   \\");
	color(7);
	gotoxy(32,12);
	printf("/     /           _-~      ~-_         |  |");
	color(8);
	gotoxy(31,13);
	printf("(      (        _-~    _--_    ~-_     _/  |");
	color(9);
	gotoxy(32,14);
	printf("\\     ~-____-~    _-~    ~-_    ~-_-~    /");
	color(10);
	gotoxy(33,15);
	printf("~-_           _-~          ~-_       _-~");
	color(11);
	gotoxy(35,16);
	printf("~--______-~                ~-___-~");
	color(4);
	
	gotoxy(43,18);
	color(11);
	printf("贪 吃 蛇 大 作 战");
	color(14);          			//黄色边框
	for (i = 20; i <= 26; i++)   	//输出上下边框┅
	{
		for (j = 27; j <= 74; j++)  //输出左右边框┇
		{
			gotoxy(j, i);
			if (i == 20 || i == 26)
			{
				printf("-");
            }
			else if (j == 27 || j == 74)
            {
				printf("|");
            }
		}
	}
	color(12);
	gotoxy(35, 22);
	printf("1.开始游戏");
	gotoxy(55, 22);
	printf("2.游戏说明");
	gotoxy(35, 24);
	printf("3.排行榜");
	gotoxy(55,24);
	printf("4.设置"); 
	gotoxy(29,27);
	color(3);
	printf("请选择[1 2 3 4]:[ ]\b\b");        //\b为退格，使得光标处于[]中间
	color(14);
	scanf("%d", &n);    		//输入选项
	switch (n)
    {
    	case 1:
			system("cls");
    		creatgraph();
			creatfood();
			break;
    	case 2:
        	system("cls");
			explation();      	//游戏说明函数
        	getchar();
			break;
		case 3:
			system("cls");
			show();
			break;
    	case 4:
        	setup();     		
        	break;
		default:				//输入非1~3之间的选项
			color(12);
			gotoxy(40,28);
			printf("请输入1~4之间的数!");
			getchar();
			if(getchar());			//输入任意键
			{system("cls");		//清屏
			 welcome();
			}
    }

}

void explation()
{color(11);
 gotoxy(35,12);
 printf("1、请用上下左右操纵");
 gotoxy(35,14);
 printf("2、控制P暂停");
 gotoxy(35,16);
 printf("3、分数将被存入排行榜"); 
 gotoxy(35,18);
 printf("4、吃到食物增长10分"); 
 gotoxy(1,1);
 printf("请按ESC返回开始界面"); 
 if(getchar())
 {	switch(getch())
    {case 27:
    	system("cls");
    	welcome();
    	break;
     case 13:
     	exit(0);
     	break;
	}
 }
}

void show()
{int a[1000];
 int i=0;
 int j,k,temp;
 int f=0;
 if((fp=fopen("HIGHSCORE.txt","rt"))==NULL)
		{printf("ERROR\n");
		 exit(0);
		}
 while(!feof(fp))
 	{fscanf(fp,"%d",&a[i]);
 	 i++;
	}
 fclose(fp);
 for(j=0;j<i;j++)
 	{for(k=j+1;k<i;k++)
 		{if(a[j]>a[k])
 			{temp=a[j];
 			 a[j]=a[k];
 			 a[k]=temp;
			}
		}
	}
 gotoxy(1,1);
 printf("返回：ESC\n"); 
 gotoxy(1,2);
 printf("退出：回车"); 
 for(j=i-1;j>=0;j--)
 	{gotoxy(35,8+f);
	 printf("%d\n",a[j]);
	 f++;
	}
 if(getchar())
 {	switch(getch())
    {case 27:
    	system("cls");
    	welcome();
    	break;
     case 13:
     	exit(0);
     	break;
	}
 }
}

void setup()
{int s;
 system("cls");
 gotoxy(12,3);
 printf("设置速度");
 gotoxy(12,5);
 color(3);
 printf("请选择[1 2 3 4]:[ ]\b\b"); 
 scanf("%d",&s);
 switch(s)
 	{case 1:
 		speed=180;
 		break;
 	 case 2:
 	 	speed=120;
 	 	break;
 	 case 3:
 	 	speed=80;
 	 	break;
 	 case 4:
 	 	speed=30;
 	 	break;
	}
 if(getchar())
 	{system("cls");
 	 welcome();
	}
}

void creatgraph()             
{
	int i,j;
	for (i=0; i<58; i+=2)
	{
		gotoprint(i, 0);			//绘制边框 
		gotoprint(i, 26);
	}
	for (i = 1; i < 26; i++)
	{gotoprint(0, i);
	 gotoprint(56, i);	
	}
	 gotoxy(63,6);
	 printf("请输入玩家姓名:"); 
	 gotoxy(63, 8);
	 scanf("%s",&name[20]);
	 for(j=63;j<=80;j++)
	 		gotodelete(j,6);	
	 gotoxy(63,10);
	 printf("欢迎来到贪吃蛇大作战"); 
	 gotoxy(63, 15);
	 printf("你的得分是:%d",score);
	 gotoxy(63,17);
	 printf("请继续努力");
	 
	 head = (snake*)malloc(sizeof(snake));	
	 head->x = 16;
	 head->y = 15;
	 tail = (snake*)malloc(sizeof(snake));

	 snake *p = (snake*)malloc(sizeof(snake));
	 snake *q = (snake*)malloc(sizeof(snake));
     p->x = 16;
   	 p->y = 16;
	 q->x = 16;
	 q->y = 17;
 	 head->next = p;
	 p->next = q;
	 q->next = tail;
	 tail->next = NULL;
	 tail->x = 4;
	 tail->y = 2;
	}

void creatfood()
{
	srand((int)time(NULL));
	lable:
	food.y = rand() % (25 - 1 + 1) + 1;
	food.x = rand() % (54 - 2 + 1) + 2;
	if (food.x % 2 != 0)
	{
		food.x = food.x+1;
	}
	snake *judge = head;
	while (1)
	{
		if (judge->next==NULL) break;
		if (food.x==judge->x&&food.y == judge->y)
		{
			goto lable;
		}
		judge = judge->next;

	}
	gotoxy(food.x, food.y);
	printf("★");
}
int ClickControl()
{
	char c;
	
	while (1)
	{ 	
		if(Judge()==0) return 0;
		while (kbhit())
		{	
			click = getch();
		}
		MovingBody();

		Eating();
	}

	return 1;

}

void MovingBody()
{
	int count = 0;
	int a = head->x, b = head->y;
	snake *p = head;
	while (1)
	{
		if (p->next == NULL) break;
		gotodelete(p->x, p->y);
		count++;
		p = p->next;
	}
	switch (click)
	{
		case 72:
		head->y -= 1;
		ChangeBody(a,b);
		break;
		case 80:
		head->y += 1;
		ChangeBody(a,b);
		break;
		case 75:
		head->x -= 2;
		ChangeBody(a,b);
		break;
		case 77:
		head->x += 2;
		ChangeBody(a,b);
		break;
		case 27:
		system("cls");
		exit(1);
		break;	
	}
	p = head;
	while (1)
	{
		if (p->next == NULL) break;
		gotoprintf(p->x, p->y);
		p = p->next;
	}

	p = head;
	gotoxy(0, 28);
	Sleep(speed);
}

void Eating()
{
	if (head->x == food.x&&head->y == food.y)
	{
		creatfood();
		snake *_new = (snake*)malloc(sizeof(snake));
		snake *p;
		p = head;
		while (1)
		{
			if (p->next->next == NULL) break;
			p = p->next;
		}
		p->next = _new;
		_new->next = tail;
		score += 10;
		gotoxy(77, 15);
		printf("%d", score);
	}
}

void ChangeBody(int a,int b)
{
	snake *p = head->next;
	int mid1, mid2,_mid1,_mid2;
	mid1 = p->x;
	mid2 = p->y;
	while (1)
	{
		if (p->next->next == NULL) break;
		_mid1 = p->next->x;
		_mid2 = p->next->y;
		p->next->x = mid1;
		p->next->y = mid2;
		mid1 = _mid1;
		mid2 = _mid2; 
		p = p->next;
	}
	p = head->next;
	if (p->next!=NULL)
	{
		p->x =a;
		p->y =b;
	}
}
int Judge()
{
	if (head->x == 0|| head->x == 56 || head->y == 0 || head->y == 26)
	{
		Finish();
		return 0;
	}
	snake *p = head->next;
	while (1)
	{
		if (p->next==NULL) break;
		if (head->x == p->x&&head->y == p->y)
		{
			Finish();
			return 0;
		}
		p = p->next;
	}
	return 1;
}

void Finish()
{	int n; 
	system("cls");
	int i;
	scoredata ();
	gotoxy(46,2);
	color(6);
	printf("\\\\\\|///");
	gotoxy(43,3);
	printf("\\\\");
	gotoxy(47,3);
	color(15);
	printf(".-.-");
	gotoxy(54,3);
	color(6);
	printf("//");

	gotoxy(44,4);
	color(14);
	printf("(");

	gotoxy(47,4);
	color(15);
	printf(".@.@");

	gotoxy(54,4);
	color(14);
	printf(")");

	gotoxy(17,5);
	color(11);
	printf("+------------------------");

	gotoxy(35,5);
	color(14);
	printf("oOOo");

	gotoxy(39,5);
	color(11);
	printf("----------");

	gotoxy(48,5);
	color(14);
	printf("(_)");

	gotoxy(51,5);
	color(11);
	printf("----------");

	gotoxy(61,5);
	color(14);
	printf("oOOo");

	gotoxy(65,5);
	color(11);
	printf("-----------------+");
	
	for(i = 6;i<=19;i++)        //竖边框
	{
		gotoxy(17,i);
		printf("|");
		gotoxy(82,i);
		printf("|");
	}

	gotoxy(17,20);
	printf("+---------------------------------");

	gotoxy(52,20);
	color(14);
	printf("☆☆☆〃");

	gotoxy(60,20);
	color(11);
	printf("----------------------+");
	gotoxy(23,7);
	color(12);
	printf("GAME OVER");
	gotoxy(23,9);
	printf("你的最终得分是%d\n",score); 
	gotoxy(23,11);
	printf("选项：");
	gotoxy(23,13);
	printf("1、查看排行   2、退出游戏");
	gotoxy(23,15);
	printf("请选择[1 2]:[ ]\b\b");        //\b为退格，使得光标处于[]中间
	color(14);
	scanf("%d", &n);    		//输入选项
	switch (n)
    {
    	case 1:
			system("cls");
			name[20]=0;
			score=0;			//重置 
			click=1;
			show();
			break;
    	case 2:
    		gotoxy(1,25);
		system("pause");
    		break;
		default:				//输入非1~3之间的选项
			exit(0);
    } 
}

void scoredata ()
{
	if((fp=fopen("HIGHSCORE.txt","a+"))==NULL)
		{printf("ERROR\n");
		 exit(0);
		}
	fprintf(fp,"%d\n",score);
	fclose(fp);
	 
}  

