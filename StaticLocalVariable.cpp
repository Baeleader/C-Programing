#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

void SimpleFunc(void)
{
	static int num1 = 0; //초기화하지 않으면 0 초기화 , SimpleFunc 내에서만 존재하는 static지역변수 
	int num2 = 0; // 초기화하지 않으면 쓰레기 값 초기화 
	num1++, num2++;
	printf("static : %d, local : %d \n", num1, num2);
}

int main(void)
{
	int i;
	for(i=0; i<3; i++)
	{
		SimpleFunc();
	}
	
	return 0;
}
