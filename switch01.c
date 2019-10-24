#include <stdio.h>
int main()
{
	char ch;
	
	printf("(a, b, c) 중에 하나를 입력하세요: ");
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 'a':
		printf("a를 입력했습니다.\n");
		printf("당신의 닉네임은 apple입니다.\n");
		break;
	    
		case 'b':
		printf("b를 입력했습니다.\n");
		printf("당신의 닉네임은 banana 입니다.\n"); 
		break;
		
		case 'c':
		printf("c를 입력했습니다.\n");
		printf("당신의 닉네임은 cherry입니다.\n"); 
		break;
		
		default:
		printf("(a, b, c)중에 하나를 입력하세요\n)");
	} 
	return 0;
}
