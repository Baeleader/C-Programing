#include <stdio.h>

int main(void)
{
	// -----------------------------------
	// ���� Ÿ�Կ� ���� printf, scanf ����
	// -----------------------------------
	
	// [1] ���� ���� �� �ʱ�ȭ
	char cSingle = 'a';
	
	// [2] ���� ��º�  
	printf("your charcter is %c\n", cSingle);
	printf("your charcter is %c and your number is %d\n", cSingle, cSingle);
	
	// [3] ���� �Էº�
	printf("Enter one Character\n");
	scanf("%c", &cSingle);
	printf("your charcter is %c and your number is %d\n", cSingle, cSingle);
	
	return 0; 
}

