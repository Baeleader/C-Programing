#include <stdio.h>

// ��� ����  
#define EXCHANGE_RATE 1120
#define DISCOUNT_RATE 0.90	// 10% ���� 

// ����̵� ���� 
typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	//----------------------------------
	// 5���� ������ �޾Ƽ� 5���� ���� �ջ��ϰ� ������ 10%���� �� KRW -> USD �� ���� �� ������ ���� ���� ���� �ۼ� 
	//----------------------------------
	
	//���� ���� �� ���� ���� ��  -->*** �ʱ�ȭ *** 
	UINT uiFivesum, uiDiscount;
	UINT uiArticle1, uiArticle2, uiArticle3, uiArticle4, uiArticle5; // �����̸��� ���� �������� 
	UINT uiKRW;
	float fUSD;
	FILE * fp = fopen("Receipt.txt", "w");
	
	//���� �� 5�� �ޱ�
	printf("What Your five Article pay?\n");
	scanf("%d %d %d %d %d", &uiArticle1, &uiArticle2, &uiArticle3, &uiArticle4, &uiArticle5);
	printf("Your pay are %d, %d, %d, %d, %d\n",uiArticle1, uiArticle2, uiArticle3, uiArticle4, uiArticle5);
	 
	// ���� 5�� �ջ� �� ������ 10% ����
	uiFivesum = uiArticle1 + uiArticle2 + uiArticle3 + uiArticle4 + uiArticle5; // 5������ �ջ� 
	uiFivesum = uiFivesum * DISCOUNT_RATE; // �ջ� ���ݿ� ���� ������ ��� 
	//uiKRW = uiFivesum - uiDiscount; // ��������� ���� 
	
	// ȯ�� ����
	//printf("Your Discount Money is %d KRW\n", uiDiscount);
	printf("Your KRW pay is %d KRW\n", uiFivesum);
	fUSD = (float)uiFivesum / EXCHANGE_RATE;
	printf("Your Exchange usd is %.2f USD\n", fUSD);
	
	// ������ �������� ���� �ۼ� 
	 fprintf(fp, "What Your five Article pay?\n");	 
	 fprintf(fp, "Your pay are %d, %d, %d, %d, %d\n",uiArticle1, uiArticle2, uiArticle3, uiArticle4, uiArticle5);
	 fprintf(fp, "Your KRW pay is %d KRW\n", uiFivesum);
	 fprintf(fp, "Your Exchange usd is %.2f USD\n", fUSD);
	 
	// ���� ����� 
	fclose(fp);
	
	return 0;
}
