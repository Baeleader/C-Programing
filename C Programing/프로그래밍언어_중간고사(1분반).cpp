#include <stdio.h>
#include <math.h>

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

#define TAX_RATE1	0.08
#define TAX_RATE2	0.17 
#define TAX_RATE3	0.26 
#define TAX_RATE4	0.35  

#define INCOME_LIMIT1  1000
#define INCOME_LIMIT2  4000
#define INCOME_LIMIT3  8000

int main(void)
{
	// ---------------------------------------------------
	// �ٷμҵ漼 ����ϱ�   
	// ---------------------------------------------------
	
	// [1] ���� �� ���������� ����  
	UINT uiIncome=0;
	UINT uiTax=0;
	UINT uiTem=0;
//	FILE* fp = fopen("TAX.txt", "w");
	
	// [2] �ٷμҵ� �Է�  
	printf("�ٷμҵ��� �Է��Ͻÿ�(����): ");
	scanf("%d",&uiIncome);
	printf("����� �ٷμҵ��� %d�����Դϴ�.\n", uiIncome);

	// [3] �ٷμҵ漼 ���
	if( uiIncome <= 1000 )
	{
		uiTax = uiIncome * 0.08;
		uiTem = 1;
	}		
	else if( uiIncome <= 4000 )
	{
		uiTax = 1000*0.08+(uiIncome-1000) * 0.17;
		uiTem = 2;
	}		
	else if( uiIncome <= 8000 )
	{
		uiTax = 1000*0.08+3000*0.17+(uiIncome-4000) * 0.26;
		uiTem = 3;
	}		
	else 
	{
		uiTax = 1000*0.08+3000*0.17+4000*0.26+(uiIncome-8000) * 0.35;
		uiTem = 4;
	}		
	
	// [4] �ٷμҵ漼 ȭ�� ��� 	
	printf("�ٷμҵ漼�� %d�����Դϴ�\n", uiTax);
	
	// [4.1]swich�� �̿� 
		switch(uiTem)
	{
		case 1:
			printf("����\n");
			break;
		case 2:
			printf("���\n");
			break;
		case 3:
			printf("����\n");
			break;
		case 4:
			printf("���� ����\n");
			break;
		default:
			printf("Your my friend.\n");
			break;
	}
	
//	// [5] �ٷμҵ漼 ���� ��� �� ���������� ����  
//	fprintf(fp, "�ٷμҵ��� �Է��Ͻÿ�(����): \n");
//	fprintf(fp, "����� �ٷμҵ��� %d�����Դϴ�.\n", uiIncome);
//	fprintf(fp, "�ٷμҵ漼�� %d�����Դϴ�.\n", uiTax);
//	fclose(fp);
	
	return 0;
} 
