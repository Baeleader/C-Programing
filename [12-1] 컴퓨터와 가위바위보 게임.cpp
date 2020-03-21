#include <stdio.h>
#include <math.h>

// 난수 발생 
#include <stdlib.h> // 난수발생 라이브러리: rand() 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	// ---------------------------------------------------
	// 컴퓨터로 가위바위보 게임 하기    
	// ---------------------------------------------------
	
	// [1] 변수 및 파일포인터 선언
	UINT uiUser = 0;  
	UINT uiComputer = 0;
	
	// [2] 사용자의 가위바위보 정보(정수)를 입력받는다. 
	printf("가위, 바위, 보 게임에 오신 것을 환영합니다. \n");
	printf("하나를 선택하세요(가위0, 바위1, 보2): ");
	scanf("%d", &uiUser);		

	// [3] 컴퓨터가 난수를 발생하여서 정수를 선택한다.
	uiComputer = rand() % 3;		
	printf("사용자=%d \n", uiUser);
	printf("컴퓨터=%d \n", uiComputer);

	// [4] 가위바위보 게임 실행 
	if ( (uiUser + 1) % 3 == uiComputer)
	{
		printf("컴퓨터 승리 \n");
	}
	else if (uiUser == uiComputer)
	{
		printf("비겼음 \n");
	}		
	else
	{
		printf("사용자 승리 \n");
	}		

	return 0;
} 
