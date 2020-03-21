#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	char str[]={'G', 'o', 'o', 'd',' ', 't', 'i', 'm', 'e'};
	int i;
	
	for(i = 0; i < 9; i++)
	{
		printf("%c", str[i]);
	}
	
	return 0;
}
