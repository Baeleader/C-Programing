#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;


int main(void)
{
	/*
		�� ���� �ڿ��� A, B, C�� �־��� �� A*B*C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ����������
		���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		���� ��� A =150, B=266, C=427
		A * B C = 150 * 266 * 427 = 17037300 �̵ǰ�
		����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������. 
	*/
	
	//���� ���� 
	int iNumone = 0;
	int iNumtwo = 0;
	int iNumthree = 0;
	int iResurtone = 0;
	int * iResurttwo = 0;
	
	// �ڿ��� A, B, C �� �ޱ�
	scanf("%d", iNumone);
	scanf("%d", iNumtwo);
	scanf("%d", iNumthree);
	
	iResurtone = iNumone * iNumtwo * iNumthree;
	iResurttwo = &iResurtone;
	
//	while(1)
//	{
		for(int i = 0; i <= ; i++)
		{
			printf("%d", iResurt[i]);
		}
//	}
//	
	return 0;
}
