#include <stdio.h>
#include <math.h>

typedef unsigned int UINT;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;

int main(void)
{
	// ------------------------------------
	// �μ��� �޾Ƽ� ���߿� ū �� �Ǵ� ���� �� ã�� 
	// ------------------------------------
	
	// ���� ���� 
	UINT uiOne = 0, uiTwo = 0;
	 
	// �� �� �Է¹ޱ�
	printf("Enter 1st Number \n");
	scanf("%d", &uiOne);
	
	printf("Enter 2nd Number \n");
	scanf("%d", &uiTwo);

	// ���ǹ� ��� ���߿� ū�� ã�Ƴ���
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
