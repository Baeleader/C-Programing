#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;


int main(void)
{
	char cSentence[100];
	int Len =0;
	
	printf("���ܾ �Է��Ͻÿ�. \n");
	scanf("%s", cSentence);
	
	while(cSentence[Len] != 0)
	{
		Len++;
	}
	
	printf("%d", Len);
	
	return 0;
}
