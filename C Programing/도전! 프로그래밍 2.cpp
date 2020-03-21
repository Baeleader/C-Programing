/*
	사용자로부터 두 개의 정수를 입력받아서 구구단을 출력하는 프로그램을 작성해보자
	예를들어서 사용자가 3과 5를 입력하면 3,4,5단이 출력되어야한다.
	한 가지 조건으로 사용자는 두 개의 숫자 입력으로부터 자유로워야 한다.
	 즉 3, 5를 입력하건 5, 3을 입력하건 결과는 같아야한다. 
*/



#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

void Multiply(int a, int b)
{
	int i, j;	
	
	for(a; a <= b; a++)
	{
		for(i = 1; i < 10; i++)
		{
			printf("%d X %d = %d\n", a, i, a*i);
		}
	}
}

int main(void)
{
	int a, b;
	printf("출력하고 싶은 단 사이의 수를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	
	if(a < b)
	{
		Multiply(a, b);
	}
	else
	{
		Multiply(b, a);
	}
	
	return 0;
}
