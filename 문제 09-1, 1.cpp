//----------------------------------------------------
// �� ���� ������ ���ڷ� ���޹޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ��� ����
// �׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ��� �ۼ��� 
//----------------------------------------------------



#include <stdio.h> 

int MaxNumber(int num1, int num2, int num3)
{
	if(num1 > num2)
		return (num1 > num3) ? num1 : num3;
	else
		return (num2 > num3) ? num2 : num3;
}

int MinNumber(int num1, int num2, int num3)
{
	if(num1 < num2)
		return (num1 < num3) ? num1 : num3;
	else
		return (num2 < num3) ? num2 : num3;
}

int main(void)
{
	int num1, num2, num3;
	
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("�� ���� ������ �ִ� : %d \n", MaxNumber(num1, num2, num3));
	printf("�� ���� ������ �ּڰ� : %d \n", MinNumber(num1, num2, num3));

	return 0;
}
