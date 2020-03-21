#include <stdio.h>
#include <math.h>

// 난수 발생 
#include <stdlib.h> // 난수발생 라이브러리: rand(), srand() 
#include <time.h>   // 서로 다른 난수 발생 (1) 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

#define LOTTO  46 

int main(void)
{
	// ---------------------------------------------------
	// 로또번호 컴퓨터로 출력하기     
	// ---------------------------------------------------
	
	// [1] 변수 선언
	UINT uiOne=0;
	UINT uiTwo=0;
	UINT uiThree=0;
	UINT uiFour=0;
	UINT uiFive=0;
	UINT uiSix=0;
	srand((UINT)time(NULL));	// 서로 다른 난수 발생 (2)
	
	// [2] 컴퓨터가 난수를 발생하여서 로또번호 6개를 생성한다. 
	for(int i = 0; i < 100; i++)
	{
	uiOne   = (rand() % 46) + 1;		
	uiTwo   = (rand() % 46) + 1;
	uiThree = (rand() % 46) + 1;
	uiFour  = (rand() % 46) + 1;
	uiFive  = (rand() % 46) + 1;
	uiSix   = (rand() % 46) + 1;
	
	// [3] 로또번호 출력 
	printf("LOTTO numbers: %d  %d  %d  %d  %d  %d\n", uiOne, uiTwo, uiThree, uiFour, uiFive, uiSix);
	}
	printf("Good luck!\n");	

	return 0;
} 
