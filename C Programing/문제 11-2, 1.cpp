#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;


int main(void)
{
	char cSentence[100];
	int Len =0;
	
	printf("영단어를 입력하시오. \n");
	scanf("%s", cSentence);
	
	while(cSentence[Len] != 0)
	{
		Len++;
	}
	
	printf("%d", Len);
	
	return 0;
}
