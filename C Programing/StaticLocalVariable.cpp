#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

void SimpleFunc(void)
{
	static int num1 = 0; //�ʱ�ȭ���� ������ 0 �ʱ�ȭ , SimpleFunc �������� �����ϴ� static�������� 
	int num2 = 0; // �ʱ�ȭ���� ������ ������ �� �ʱ�ȭ 
	num1++, num2++;
	printf("static : %d, local : %d \n", num1, num2);
}

int main(void)
{
	int i;
	for(i=0; i<3; i++)
	{
		SimpleFunc();
	}
	
	return 0;
}
