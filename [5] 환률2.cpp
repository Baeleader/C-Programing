#include <stdio.h>

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

// 상수 선언 
#define EXCHANGE_RATE 1120 

int main(void)
{
	// ---------------------------------------------------
	// KRW -> USD 
	// ---------------------------------------------------

	// [1] 변수 선언  
	float fUSD=0;
	UINT uiKRW=0;
	
	// [2] 금액 입력  
	printf("How much would you like to exchange?\n"); 
	scanf("%d", &uiKRW);
	printf("Your money: %d KRW\n", uiKRW);
	
	// [3] 환률에 따라 변환 및 출력  
	fUSD = (float)uiKRW/EXCHANGE_RATE;			// [중요] casting 연산! 
	printf("Exchanged Money: %.2f USD\n", fUSD);	
	
	return 0;
} 
