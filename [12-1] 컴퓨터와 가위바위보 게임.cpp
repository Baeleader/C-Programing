#include <stdio.h>
#include <math.h>

// ���� �߻� 
#include <stdlib.h> // �����߻� ���̺귯��: rand() 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	// ---------------------------------------------------
	// ��ǻ�ͷ� ���������� ���� �ϱ�    
	// ---------------------------------------------------
	
	// [1] ���� �� ���������� ����
	UINT uiUser = 0;  
	UINT uiComputer = 0;
	
	// [2] ������� ���������� ����(����)�� �Է¹޴´�. 
	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�. \n");
	printf("�ϳ��� �����ϼ���(����0, ����1, ��2): ");
	scanf("%d", &uiUser);		

	// [3] ��ǻ�Ͱ� ������ �߻��Ͽ��� ������ �����Ѵ�.
	uiComputer = rand() % 3;		
	printf("�����=%d \n", uiUser);
	printf("��ǻ��=%d \n", uiComputer);

	// [4] ���������� ���� ���� 
	if ( (uiUser + 1) % 3 == uiComputer)
	{
		printf("��ǻ�� �¸� \n");
	}
	else if (uiUser == uiComputer)
	{
		printf("����� \n");
	}		
	else
	{
		printf("����� �¸� \n");
	}		

	return 0;
} 
