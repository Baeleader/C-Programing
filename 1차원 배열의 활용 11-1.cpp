#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	int i, arr[5];
	int Max = 0, Min = 0, Sum = 0;
	
	printf("���� 5�� �Է� : \n");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	
	for(i = 0; i < 5; i++)
	{
		if(Max < arr[i])
		{
			Max = arr[i];
		}
		else if(Min > arr[i])
		{
			Min = arr[i];
		}
	}
	printf("�ִ� : %d \n", Max);
	
	printf("�ּڰ� : %d \n", Min);
	
	for(i = 0; i < 5; i++)
	{
		Sum += arr[i];
	}
	printf("�� �� : %d \n", Sum);
	
	return 0;
}
