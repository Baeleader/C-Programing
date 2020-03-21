	//------------------------------------------
	// 10진수 정수를 입력 받아서  16진수로 출력하는 프로그램을 작성하자.
	// 이는 서식문자의 활용에 대한 문제이다. 
	//------------------------------------------
	
#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{

	int iDesimal=0;
	
	printf("10진수 입력 : ");
	scanf("%d", &iDesimal);
	
	printf("16진수 출력 : %x", iDesimal);
	
	return 0;
}
