#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int add(int num1, int num2) // 인자전달 (o), 반환 값 (o) 
{
	return num1 + num2;
}

void ShowaddResult(int num) // 인자전달 (o), 반환 값 (x)
{
	printf("덧셈결과 출력 : %d \n", num);
}

int ReadNum(void) // 인자전달 (x), 봔한 값 (o) 
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) // 인자전달 (x), 반환 값 (x) 
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("그럼 두 개의 정수를 입력하시오. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = add(num1, num2);
	ShowaddResult(result);
	return 0;
}
