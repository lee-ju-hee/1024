#include <stdio.h>
int main()
{
	int age, money=10000;
	
	printf("당신의 나이는? ");
	scanf("%d", &age);
	
	if(age<19 || age>=60)
	{
		money-=5000;
	}
	
	printf("당신의 입장료는 %d입니다.", money);
	
	return 0;
}
