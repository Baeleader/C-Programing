#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

void Add(int val);
int num;

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	printf("num : %d \n", num);
	Add(3);
	printf("num : %d \n", num);
	num++; // �������� num�� �� 1����
	printf("num : %d \n", num);
	
	return 0;
}

void Add(int val)
{
	num += val;
}
