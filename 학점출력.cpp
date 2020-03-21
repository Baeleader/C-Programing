#include <stdio.h>
#include <math.h>

typedef unsigned int UINT;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;

int main(void)
{
	// ------------------------------------
	// 성적 : grade 성적 받아서 학점 출력하기 
	// ------------------------------------
	
	// 변수 선언 
	UINT uiScore = 0;
	 
	// 성적 입력받기 
	printf("Enter Your Score : \n");
	scanf("%d", &uiScore);

	// 조건문 사용하여 학점 출력하기 
	if(uiScore <= 100 && uiScore >= 90)
	{
		printf("Your Grade is A \n");
	}
	else if(uiScore < 90 && uiScore >= 80)
	{
		printf("Your Grade is B \n");
	}
	else if(uiScore < 80 && uiScore >= 70)
	{
		printf("Your Grade is C \n");
	}
	else if(uiScore < 70 && uiScore >= 60)
	{
		printf("Your Grade is D \n");
	}
	else
	{
		printf("Your Grade is F \n Cheer Up Baby\n");
	}
	
	
	return 0;
}
