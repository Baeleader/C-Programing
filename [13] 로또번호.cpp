#include <stdio.h>
#include <math.h>

// ���� �߻� 
#include <stdlib.h> // �����߻� ���̺귯��: rand(), srand() 
#include <time.h>   // ���� �ٸ� ���� �߻� (1) 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

#define LOTTO  46 

int main(void)
{
	// ---------------------------------------------------
	// �ζǹ�ȣ ��ǻ�ͷ� ����ϱ�     
	// ---------------------------------------------------
	
	// [1] ���� ����
	UINT uiOne=0;
	UINT uiTwo=0;
	UINT uiThree=0;
	UINT uiFour=0;
	UINT uiFive=0;
	UINT uiSix=0;
	srand((UINT)time(NULL));	// ���� �ٸ� ���� �߻� (2)
	
	// [2] ��ǻ�Ͱ� ������ �߻��Ͽ��� �ζǹ�ȣ 6���� �����Ѵ�. 
	for(int i = 0; i < 100; i++)
	{
	uiOne   = (rand() % 46) + 1;		
	uiTwo   = (rand() % 46) + 1;
	uiThree = (rand() % 46) + 1;
	uiFour  = (rand() % 46) + 1;
	uiFive  = (rand() % 46) + 1;
	uiSix   = (rand() % 46) + 1;
	
	// [3] �ζǹ�ȣ ��� 
	printf("LOTTO numbers: %d  %d  %d  %d  %d  %d\n", uiOne, uiTwo, uiThree, uiFour, uiFive, uiSix);
	}
	printf("Good luck!\n");	

	return 0;
} 
