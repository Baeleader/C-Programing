/*
해당 지역 내에서는 전역변수가 가리워지고, 지역변수로의 접근이 이루어진다. 
*/

#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int Add(int val);
int num =1;

int main(void)
{
	printf("전역변수 num : %d \n", num);
	int num=5;
	printf("num : %d \n", Add(3));
	printf("num : %d \n", num+9);
	
	return 0;
}

int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}
