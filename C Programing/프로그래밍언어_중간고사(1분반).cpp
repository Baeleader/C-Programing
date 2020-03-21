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
	// 근로소득세 계산하기   
	// ---------------------------------------------------
	
	// [1] 변수 및 파일포인터 선언  
	UINT uiIncome=0;
	UINT uiTax=0;
	UINT uiTem=0;
//	FILE* fp = fopen("TAX.txt", "w");
	
	// [2] 근로소득 입력  
	printf("근로소득을 입력하시오(만원): ");
	scanf("%d",&uiIncome);
	printf("당신의 근로소득은 %d만원입니다.\n", uiIncome);

	// [3] 근로소득세 계산
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
	
	// [4] 근로소득세 화면 출력 	
	printf("근로소득세는 %d만원입니다\n", uiTax);
	
	// [4.1]swich문 이용 
		switch(uiTem)
	{
		case 1:
			printf("가난\n");
			break;
		case 2:
			printf("평범\n");
			break;
		case 3:
			printf("부자\n");
			break;
		case 4:
			printf("많이 부자\n");
			break;
		default:
			printf("Your my friend.\n");
			break;
	}
	
//	// [5] 근로소득세 파일 출력 및 파일포인터 종료  
//	fprintf(fp, "근로소득을 입력하시오(만원): \n");
//	fprintf(fp, "당신의 근로소득은 %d만원입니다.\n", uiIncome);
//	fprintf(fp, "근로소득세는 %d만원입니다.\n", uiTax);
//	fclose(fp);
	
	return 0;
} 
