#include <stdio.h>
int main()
{
	int age, money=10000;
	
	printf("����� ���̴�? ");
	scanf("%d", &age);
	
	if(age<19 || age>=60)
	{
		money-=5000;
	}
	
	printf("����� ������ %d�Դϴ�.", money);
	
	return 0;
}
