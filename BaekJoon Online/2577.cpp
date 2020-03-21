#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;


int main(void)
{
	/*
		세 개의 자연수 A, B, C가 주어질 때 A*B*C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를
		구하는 프로그램을 작성하시오.
		예를 들어 A =150, B=266, C=427
		A * B C = 150 * 266 * 427 = 17037300 이되고
		계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다. 
	*/
	
	//변수 선언 
	int iNumone = 0;
	int iNumtwo = 0;
	int iNumthree = 0;
	int iResurtone = 0;
	int * iResurttwo = 0;
	
	// 자연수 A, B, C 값 받기
	scanf("%d", iNumone);
	scanf("%d", iNumtwo);
	scanf("%d", iNumthree);
	
	iResurtone = iNumone * iNumtwo * iNumthree;
	iResurttwo = &iResurtone;
	
//	while(1)
//	{
		for(int i = 0; i <= ; i++)
		{
			printf("%d", iResurt[i]);
		}
//	}
//	
	return 0;
}
