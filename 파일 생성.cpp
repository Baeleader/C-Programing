#include <stdio.h>

int main(void)
{
	// [1] file 생성 및 변수 선언부
	// ---------------------------------- 
	FILE * ts = fopen("Sample.txt", "w"); // w :쓰기  모드 r : 읽기 모드 a : 추가 하기 
	// ----------------------------------
	
	// [1.2] 변수 선언
	// ----------------------------------
	char cSentence[100];
	int iNum = 0;
	short sNum = 0;
	float fNum = 0;
	// ----------------------------------
	
	// [2] fprintf 연습
	// ----------------------------------
	printf("Example\n");
	fprintf(ts, "Example\n"); 
	
	// string형 출력
	printf("Enter a string : \n");
	fprintf(ts, "Enter a string : \n");
	scanf("%[^\n]", cSentence);
	printf("Your Enter string %s\n", cSentence);
	fprintf(ts, "Your Enter string %s\n", cSentence);
	
	// short형 출력 
	printf("Enter a sNumber :\n");
	fprintf(ts, "Enter a sNumber :\n");
	scanf("%d", &sNum);
	printf("Your sNumber is %d\n", sNum);
	fprintf(ts, "Your sNumber is %d\n", sNum);
	
	// int형 출력 
	printf("Enter a iNumber :\n");
	fprintf(ts, "Enter a iNumber :\n");
	scanf("%d", &iNum);
	printf("Your iNumber is %d\n", iNum);
	fprintf(ts, "Your iNumber is %d\n", iNum);
	
	// float형 출력 
	printf("Enter a fNumber :\n");
	fprintf(ts, "Enter a fNumber :\n");
	scanf("%f", &fNum);
	printf("Your fNumber is %0.2f\n", fNum);
	fprintf(ts, "Your iNumber is %0.2f\n", fNum);
	
	// ----------------------------------
	
	// [3] file 종료부 (필수)
	// ---------------------------------- 
	fclose(ts);
	// ----------------------------------
	
	
	
	return 0;
}
