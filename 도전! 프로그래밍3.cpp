/*
	�ΰ��� ������ �Է¹޾Ƽ� �ִ� �����(GCD)�� ���ϴ� ���α׷��� �ۼ� 
*/
#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	int num1, num2, GCD;
	
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &num1, &num2);
	
	for(GCD = 2; GCD <= num2; GCD++)
	{
		if(num1 % GCD == 0 && num2 % GCD == 0)
		{
			printf("�ִ� �����(GCD) : %d", GCD);
		}
		else
		{
			continue;
		}
	}
	
	return 0;
}
