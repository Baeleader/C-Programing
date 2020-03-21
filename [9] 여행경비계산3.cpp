#include <stdio.h>

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	// ---------------------------------------------------
	// 해외여행 경비 계산하기  
	// ---------------------------------------------------

	// [1] 변수 선언  
	UINT uiDays=0;	
	UINT uiTotalPrice=0;
	UINT uiTempPrice=0;
	//FILE* fp = fopen("Result.txt", "w"); ////////////////////
	
	// [2] 여행경비 입력 
	printf("How long is the trip?\n"); 
	scanf("%d", &uiDays);	
	//fprintf(fp, "How long is the trip?  %d\n", uiDays); ////////////////////

	printf("How much is an airline ticket?\n"); 
	scanf("%d", &uiTempPrice);	
	//uiTotalPrice = uiTotalPrice + uiTempPrice;
	uiTotalPrice += uiTempPrice;
	//fprintf(fp, "How much is an airline ticket?  %d\n", uiTempPrice); //////////////////// 
	
	printf("How much is a hotel price per day?\n"); 
	scanf("%d", &uiTempPrice);
	//uiTotalPrice = uiTotalPrice + uiTempPrice*uiDays;	 
	uiTotalPrice += uiTempPrice*uiDays;
	//fprintf(fp, "How much is a hotel price per day?  %d\n", uiTempPrice); //////////////////// 
	
	printf("How much is a pocket money per day?\n"); 
	scanf("%d", &uiTempPrice);	 		 
	//uiTotalPrice = uiTotalPrice + uiTempPrice*uiDays;	 
	uiTotalPrice += uiTempPrice*uiDays;	
	//fprintf(fp, "How much is a pocket money per day?  %d\n", uiTempPrice); //////////////////// 

	// [3] 최종 여행경비 계산 및 출력
	printf("Total price for your trip is %d KRW\n", uiTotalPrice);
	//fprintf(fp, "Total price for your trip is %d KRW\n", uiTotalPrice); ////////////////////
	
	//fclose(fp); ////////////////////
	return 0;
} 
