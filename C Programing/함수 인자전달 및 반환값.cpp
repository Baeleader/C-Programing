#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int add(int num1, int num2) // �������� (o), ��ȯ �� (o) 
{
	return num1 + num2;
}

void ShowaddResult(int num) // �������� (o), ��ȯ �� (x)
{
	printf("������� ��� : %d \n", num);
}

int ReadNum(void) // �������� (x), ���� �� (o) 
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) // �������� (x), ��ȯ �� (x) 
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("�׷� �� ���� ������ �Է��Ͻÿ�. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = add(num1, num2);
	ShowaddResult(result);
	return 0;
}
