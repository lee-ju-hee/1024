#include <stdio.h>
int main()
{
	char ch;
	
	printf("대문자입력: ");
	scanf("%c", &ch);
	
	//대문자 'A' ASCII code 값 65
	//소문자 'a' ASCII code 값 97    두 문자의 gap은 32 
	printf("%c의 소문자는 %c입니다.", ch, ch+32);
	return 0;
}
