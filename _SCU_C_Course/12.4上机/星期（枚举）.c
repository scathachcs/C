#include<stdio.h>
enum WeekdayType
{
	MON,TUE,WED,THU,FRI,SAT,SUN
};
void show(enum WeekdayType a);

int main ()
{
	int n,j,k;
	enum WeekdayType a;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&k);
		a=(enum WeekdayType)(k-1);
		show(a);
	}
	return 0;
} 

void show(enum WeekdayType a)
{
	switch (a)
	{
		case MON:
			printf("MON\n");
			break;	
		case TUE:
			printf("TUE\n");
			break;
		case WED:
			printf("WED\n");
			break;
		case THU:
			printf("THU\n");
			break;
		case FRI:
			printf("FRI\n");
			break;
		case SAT:
			printf("SAT\n");
			break;	
		case SUN:
			printf("SUN\n");
			break;
	}
	
}
