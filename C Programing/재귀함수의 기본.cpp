#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

void Recursive(int num)
{
	if(num <=0)
	{
		return;
	}
	printf("Recursive call! %d \n", num);
	Recursive(num-1);
}

int main(void)
{
	Recursive(3);
	return 0;
}
