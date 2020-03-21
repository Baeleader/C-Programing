#include <stdio.h>

int main(void)
{
	// -----------------------------------
	// 변수 타입에 따른 printf, scanf 연습
	// -----------------------------------
	
	// [1] 변수 선언 및 초기화
	char cSingle = 'a';
	
	// [2] 변수 출력부  
	printf("your charcter is %c\n", cSingle);
	printf("your charcter is %c and your number is %d\n", cSingle, cSingle);
	
	// [3] 변수 입력부
	printf("Enter one Character\n");
	scanf("%c", &cSingle);
	printf("your charcter is %c and your number is %d\n", cSingle, cSingle);
	
	return 0; 
}

