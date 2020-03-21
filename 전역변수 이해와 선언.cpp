#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

void Add(int val);
int num;

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	printf("num : %d \n", num);
	Add(3);
	printf("num : %d \n", num);
	num++; // 전역변수 num의 값 1증가
	printf("num : %d \n", num);
	
	return 0;
}

void Add(int val)
{
	num += val;
}
