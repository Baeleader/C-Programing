// scanf �ǽ� 
// ���� char 1byte, short 2byte, int 4byte
// �Ǽ� float 4byte 

#include <stdio.h>

int main(void)
{
	//printf("\nThere is nothing to watch\n");//...�� ����â�� ��� 
	//printf("\ni have a dream\n");
	
	printf("Enter your favorite number?\n");
	
	int iExample = 0; // ������ ���� ����, ���� �� 0���� �ʱ�ȭ(����) 
	scanf("%d", &iExample); // & = �ּҿ����� 
	
	printf("your favorite number is %d\n", iExample);
	
	return 0;
}
