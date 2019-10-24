#include <stdio.h>
int main()
{
	int year, month, days;
	
	printf("년도를 입력하세요: ");
	scanf("%d", &year);
	
	printf("달을 입력하세요: ");
	scanf("%d", &month); 
	
	switch(month)
	{
		case 2:
			if(year%4==0 && year%100!=0 || year%400==0)
				days=29;
			else
				days=28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days=30;
			break;
		default:
			days=31;
			break;
	}
	
	printf("%d년 %d월은 %d일 입니다.\n", year, month, days);
}
