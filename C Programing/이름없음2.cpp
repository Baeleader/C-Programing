#include <stdio.h>
#define EXCHANGE_RATE 1120
#define Discount 10 * 1/100

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	//
	// 5���� ������ �޾Ƽ� 5���� ���� �ջ��ϰ� ������ 10%���� �� KRW -> USD �� ���� �� ������ ���� ���� ���� �ۼ� 
	//
	
	// 5�� ���� �ޱ�
	FILE * fp = fopen("Receipt.txt", "w");
	UINT uiArticle1, uiArticle2, uiArticle3, uiArticle4, uiArticle5;
	UINT uiKRW;
	float fUSD;
	UINT uiFivesum;
	UINT uiDiscount;
	// 5�� ���ϱ�
	printf("Your five Article are pay?\n");
	scanf("%d %d %d %d %d", &uiArticle1, &uiArticle2, &uiArticle3, &uiArticle4, &uiArticle5);
	uiFivesum = uiArticle1 + uiArticle2 + uiArticle3 + uiArticle4 + uiArticle5;
	printf("your fivesum pay : %d\n", uiFivesum);
	// ������ 10�� ����
	uiDiscount = uiFivesum * Discount;
	printf("Your five article Discount is %d\n", uiDiscount);
	
	// ȯ������
	uiKRW = uiFivesum - uiDiscount;
	fUSD = (float)uiKRW / EXCHANGE_RATE;
	
	printf("your five article KRW : %d\n", uiKRW); 
	printf("Your exchange money : %.2f USD\n", fUSD); 
	// ������ ���� ���� �ۼ�
	fprintf(fp, "Your five Article are pay?\n");
	fscanf(fp, "%d %d %d %d %d", &uiArticle1, &uiArticle2, &uiArticle3, &uiArticle4, &uiArticle5);
	fprintf(fp, "your fivesum pay : %d\n", uiFivesum);
	fprintf(fp, "Your five article Discount is %d\n", uiDiscount);
	fprintf(fp, "your five article KRW : %d\n", uiFivesum); 
	fprintf(fp, "Your exchange money : %.2f\n", fUSD); 

	// ���� ����� 
	fclose(fp);
	return 0;
}
