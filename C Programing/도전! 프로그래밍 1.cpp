	//------------------------------------------
	// 10���� ������ �Է� �޾Ƽ�  16������ ����ϴ� ���α׷��� �ۼ�����.
	// �̴� ���Ĺ����� Ȱ�뿡 ���� �����̴�. 
	//------------------------------------------
	
#include <stdio.h> // �⺻ �������� 
#include <math.h> // ������ �Լ� ��� 
#include <stdlib.h> // ���� �߻� ��� rand(), srand((UINT)time(NULL));
#include <time.h> // ���� �����߻� ��� 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{

	int iDesimal=0;
	
	printf("10���� �Է� : ");
	scanf("%d", &iDesimal);
	
	printf("16���� ��� : %x", iDesimal);
	
	return 0;
}
