#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

#define MY_MONEY 3500

int main(void)
{
	int Cream = 500, Shrimp = 700, Coke = 400;
	int num;
	
	printf("현재 당신이 소유 하고있는 금액 %d 원\n", MY_MONEY);
	
	printf("1번 : 크림빵 1개, 새우깡 2개, 콜 라 4개\n");
	printf("2번 : 크림빵 2개, 새우깡 3개, 콜 라 1개\n");
	printf("3번 : 크림빵 4개, 새우깡 1개, 콜 라 2개\n");
	printf("몇번을 선택하여 구입하시겠습니까? ");
	scanf("%d", &num);
	
	switch(num)
	{
	case 1:
		printf("1번 : 크림빵 1개, 새우깡 2개, 콜 라 4개\n");
		printf("크림빵 %d원, 새우깡 %d원, 콜 라 %d원 합계 %d원\n", Cream*1, Shrimp*2, Coke*4, MY_MONEY);
		break;
	case 2:
		printf("2번 : 크림빵 2개, 새우깡 3개, 콜 라 1개\n");
		printf("크림빵 %d원, 새우깡 %d원, 콜 라 %d원 합계 %d원\n", Cream*2, Shrimp*3, Coke*1, MY_MONEY);
		break;
	case 3:
		printf("3번 : 크림빵 4개, 새우깡 1개, 콜 라 2개\n");
		printf("크림빵 %d원, 새우깡 %d원, 콜 라 %d원 합계 %d원\n", Cream*4, Shrimp*1, Coke*2, MY_MONEY);
		break;
	}
	return 0;
}
