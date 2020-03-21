/*
	두개의 정수를 입력받아서 최대 공약수(GCD)를 구하는 프로그램을 작성 
*/
#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	int num1, num2, GCD;
	
	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);
	
	for(GCD = 2; GCD <= num2; GCD++)
	{
		if(num1 % GCD == 0 && num2 % GCD == 0)
		{
			printf("최대 공약수(GCD) : %d", GCD);
		}
		else
		{
			continue;
		}
	}
	
	return 0;
}
