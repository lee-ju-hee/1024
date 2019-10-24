#include <stdio.h>
int main()
{
	int i, num, hap=0;
	
	printf("양의 정수 입력: ");
	scanf("%d", &num);
	
	i=num;
	
	do
	{
		hap+=i;
		i--;
	}
	while(i>0);
	
	printf("1부터 %d까지의 합=%d입니다.\n", num, hap);
	return 0;
}
