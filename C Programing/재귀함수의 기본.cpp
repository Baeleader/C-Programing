#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

void Recursive(int num)
{
	if(num <=0)
	{
		return;
	}
	printf("Recursive call! %d \n", num);
	Recursive(num-1);
}

int main(void)
{
	Recursive(3);
	return 0;
}
