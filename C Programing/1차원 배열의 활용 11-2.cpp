#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	char str[]={'G', 'o', 'o', 'd',' ', 't', 'i', 'm', 'e'};
	int i;
	
	for(i = 0; i < 9; i++)
	{
		printf("%c", str[i]);
	}
	
	return 0;
}
