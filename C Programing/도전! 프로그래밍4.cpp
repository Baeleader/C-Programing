#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

#define MY_MONEY 3500

int main(void)
{
	int Cream = 500, Shrimp = 700, Coke = 400;
	int num;
	
	printf("���� ����� ���� �ϰ��ִ� �ݾ� %d ��\n", MY_MONEY);
	
	printf("1�� : ũ���� 1��, ����� 2��, �� �� 4��\n");
	printf("2�� : ũ���� 2��, ����� 3��, �� �� 1��\n");
	printf("3�� : ũ���� 4��, ����� 1��, �� �� 2��\n");
	printf("����� �����Ͽ� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &num);
	
	switch(num)
	{
	case 1:
		printf("1�� : ũ���� 1��, ����� 2��, �� �� 4��\n");
		printf("ũ���� %d��, ����� %d��, �� �� %d�� �հ� %d��\n", Cream*1, Shrimp*2, Coke*4, MY_MONEY);
		break;
	case 2:
		printf("2�� : ũ���� 2��, ����� 3��, �� �� 1��\n");
		printf("ũ���� %d��, ����� %d��, �� �� %d�� �հ� %d��\n", Cream*2, Shrimp*3, Coke*1, MY_MONEY);
		break;
	case 3:
		printf("3�� : ũ���� 4��, ����� 1��, �� �� 2��\n");
		printf("ũ���� %d��, ����� %d��, �� �� %d�� �հ� %d��\n", Cream*4, Shrimp*1, Coke*2, MY_MONEY);
		break;
	}
	return 0;
}
