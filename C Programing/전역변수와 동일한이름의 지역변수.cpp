/*
�ش� ���� �������� ���������� ����������, ������������ ������ �̷������. 
*/

#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int Add(int val);
int num =1;

int main(void)
{
	printf("�������� num : %d \n", num);
	int num=5;
	printf("num : %d \n", Add(3));
	printf("num : %d \n", num+9);
	
	return 0;
}

int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}
