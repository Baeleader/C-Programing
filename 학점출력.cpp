#include <stdio.h>
#include <math.h>

typedef unsigned int UINT;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;

int main(void)
{
	// ------------------------------------
	// ���� : grade ���� �޾Ƽ� ���� ����ϱ� 
	// ------------------------------------
	
	// ���� ���� 
	UINT uiScore = 0;
	 
	// ���� �Է¹ޱ� 
	printf("Enter Your Score : \n");
	scanf("%d", &uiScore);

	// ���ǹ� ����Ͽ� ���� ����ϱ� 
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
