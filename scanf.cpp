// scanf 실습 
// 정수 char 1byte, short 2byte, int 4byte
// 실수 float 4byte 

#include <stdio.h>

int main(void)
{
	//printf("\nThere is nothing to watch\n");//...를 도스창에 출력 
	//printf("\ni have a dream\n");
	
	printf("Enter your favorite number?\n");
	
	int iExample = 0; // 정수형 변수 선언, 선언 시 0으로 초기화(습관) 
	scanf("%d", &iExample); // & = 주소연산자 
	
	printf("your favorite number is %d\n", iExample);
	
	return 0;
}
