#include <stdio.h>

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

// ��� ���� 
#define EXCHANGE_RATE 1120 

int main(void)
{
	// ---------------------------------------------------
	// KRW -> USD 
	// ---------------------------------------------------

	// [1] ���� ����  
	float fUSD=0;
	UINT uiKRW=0;
	
	// [2] �ݾ� �Է�  
	printf("How much would you like to exchange?\n"); 
	scanf("%d", &uiKRW);
	printf("Your money: %d KRW\n", uiKRW);
	
	// [3] ȯ���� ���� ��ȯ �� ���  
	fUSD = (float)uiKRW/EXCHANGE_RATE;			// [�߿�] casting ����! 
	printf("Exchanged Money: %.2f USD\n", fUSD);	
	
	return 0;
} 
