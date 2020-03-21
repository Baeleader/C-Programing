#include <stdio.h>
#include <math.h>

typedef unsigned int UINT;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;

int main(void)
{
	// ------------------------------------
	// 두수를 받아서 둘중에 큰 수 또는 작은 수 찾기 
	// ------------------------------------
	
	// 변수 선언 
	UINT uiOne = 0, uiTwo = 0;
	 
	// 두 수 입력받기
	printf("Enter 1st Number \n");
	scanf("%d", &uiOne);
	
	printf("Enter 2nd Number \n");
	scanf("%d", &uiTwo);

	// 조건문 사용 둘중에 큰수 찾아내기
	if(uiOne >= uiTwo)
	{
		printf("Max Number is %d \n", uiOne);
	}
	else
	{
		printf("Max Number is %d \n", uiTwo);
	}
	
	
	return 0;
}
