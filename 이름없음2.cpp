#include <stdio.h>
#define EXCHANGE_RATE 1120
#define Discount 10 * 1/100

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	//
	// 5개의 물건을 받아서 5개의 값을 합산하고 할인율 10%적용 후 KRW -> USD 로 변경 후 영수증 증빙 서류 까지 작성 
	//
	
	// 5개 물건 받기
	FILE * fp = fopen("Receipt.txt", "w");
	UINT uiArticle1, uiArticle2, uiArticle3, uiArticle4, uiArticle5;
	UINT uiKRW;
	float fUSD;
	UINT uiFivesum;
	UINT uiDiscount;
	// 5개 더하기
	printf("Your five Article are pay?\n");
	scanf("%d %d %d %d %d", &uiArticle1, &uiArticle2, &uiArticle3, &uiArticle4, &uiArticle5);
	uiFivesum = uiArticle1 + uiArticle2 + uiArticle3 + uiArticle4 + uiArticle5;
	printf("your fivesum pay : %d\n", uiFivesum);
	// 할인율 10퍼 적용
	uiDiscount = uiFivesum * Discount;
	printf("Your five article Discount is %d\n", uiDiscount);
	
	// 환율변경
	uiKRW = uiFivesum - uiDiscount;
	fUSD = (float)uiKRW / EXCHANGE_RATE;
	
	printf("your five article KRW : %d\n", uiKRW); 
	printf("Your exchange money : %.2f USD\n", fUSD); 
	// 영수증 증빙 서류 작성
	fprintf(fp, "Your five Article are pay?\n");
	fscanf(fp, "%d %d %d %d %d", &uiArticle1, &uiArticle2, &uiArticle3, &uiArticle4, &uiArticle5);
	fprintf(fp, "your fivesum pay : %d\n", uiFivesum);
	fprintf(fp, "Your five article Discount is %d\n", uiDiscount);
	fprintf(fp, "your five article KRW : %d\n", uiFivesum); 
	fprintf(fp, "Your exchange money : %.2f\n", fUSD); 

	// 파일 종료부 
	fclose(fp);
	return 0;
}
