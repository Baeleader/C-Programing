#include <stdio.h>

int main(void)
{
	char string[100] = { };
	int i;
	
	scanf("%s", string);//�Է¹ް� ���� ���ڿ� �Է� 
	
	for(i = 0; i < 100; i++)//�ݺ��� �̿� �迭 ��� 
	{
		if(i % 10 == 0 && i != 0)// 10���� ��� ��� ���ǹ�  
		{
			printf("\n");
		}
		printf("%c", string[i]); // �Է¹��� ���� ��� 
	}
	
	return 0;
}
