#include <stdio.h>

// 상수 정의  
#define EXCHANGE_RATE 1120
#define DISCOUNT_RATE 0.90	// 10% 할인 

// 언사이드 정의 
typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	//----------------------------------
	// 5개의 물건을 받아서 5개의 값을 합산하고 할인율 10%적용 후 KRW -> USD 로 변경 후 영수증 증빙 서류 까지 작성 
	//----------------------------------
	
	//변수 선언 및 파일 생성 부  -->*** 초기화 *** 
	UINT uiFivesum, uiDiscount;
	UINT uiArticle1, uiArticle2, uiArticle3, uiArticle4, uiArticle5; // 변수이름에 숫자 넣지말기 
	UINT uiKRW;
	float fUSD;
	FILE * fp = fopen("Receipt.txt", "w");
	
	//물건 값 5개 받기
	printf("What Your five Article pay?\n");
	scanf("%d %d %d %d %d", &uiArticle1, &uiArticle2, &uiArticle3, &uiArticle4, &uiArticle5);
	printf("Your pay are %d, %d, %d, %d, %d\n",uiArticle1, uiArticle2, uiArticle3, uiArticle4, uiArticle5);
	 
	// 물건 5개 합산 후 할인율 10% 적용
	uiFivesum = uiArticle1 + uiArticle2 + uiArticle3 + uiArticle4 + uiArticle5; // 5개가격 합산 
	uiFivesum = uiFivesum * DISCOUNT_RATE; // 합산 가격에 따른 할인율 계산 
	//uiKRW = uiFivesum - uiDiscount; // 할인적용된 가격 
	
	// 환율 변경
	//printf("Your Discount Money is %d KRW\n", uiDiscount);
	printf("Your KRW pay is %d KRW\n", uiFivesum);
	fUSD = (float)uiFivesum / EXCHANGE_RATE;
	printf("Your Exchange usd is %.2f USD\n", fUSD);
	
	// 영수증 증빙서류 파일 작성 
	 fprintf(fp, "What Your five Article pay?\n");	 
	 fprintf(fp, "Your pay are %d, %d, %d, %d, %d\n",uiArticle1, uiArticle2, uiArticle3, uiArticle4, uiArticle5);
	 fprintf(fp, "Your KRW pay is %d KRW\n", uiFivesum);
	 fprintf(fp, "Your Exchange usd is %.2f USD\n", fUSD);
	 
	// 파일 종료부 
	fclose(fp);
	
	return 0;
}
