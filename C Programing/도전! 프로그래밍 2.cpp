/*
	����ڷκ��� �� ���� ������ �Է¹޾Ƽ� �������� ����ϴ� ���α׷��� �ۼ��غ���
	������ ����ڰ� 3�� 5�� �Է��ϸ� 3,4,5���� ��µǾ���Ѵ�.
	�� ���� �������� ����ڴ� �� ���� ���� �Է����κ��� �����ο��� �Ѵ�.
	 �� 3, 5�� �Է��ϰ� 5, 3�� �Է��ϰ� ����� ���ƾ��Ѵ�. 
*/



#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

void Multiply(int a, int b)
{
	int i, j;	
	
	for(a; a <= b; a++)
	{
		for(i = 1; i < 10; i++)
		{
			printf("%d X %d = %d\n", a, i, a*i);
		}
	}
}

int main(void)
{
	int a, b;
	printf("����ϰ� ���� �� ������ ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);
	
	if(a < b)
	{
		Multiply(a, b);
	}
	else
	{
		Multiply(b, a);
	}
	
	return 0;
}
