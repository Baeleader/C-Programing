/*
����(Celsius)�µ��� �Է��ϸ� ȭ��(Fahrenheit)�µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ��� �� �ݴ��  
ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel��� �̸��� �Լ��� �����ϰ� 
�̵� �Լ��� ȣ���ϴ� ������ �ϼ��غ���. ����� ������ ȭ���� �µ���ȯ�� ������ ������ ����.
Fah = 1.8 * Cel + 32
Cel = Fah / 1.8 - 32
*/

#include <stdio.h>

float CelToFah(float Cel)
{
	float Fah;
	
	Fah = 1.8 * Cel + 32;
	
	return Fah;
}

float FahToCel(float Fah)
{
	float Cel;
	
	Cel = (Fah-32) / 1.8;
	
	return Cel;
}

int main(void)
{
	float Fah, Cel;
	
	printf("���� ���� �µ��� ȭ�� �µ��� ��ȯ �ұ��?");
	scanf("%f", &Cel);
	printf("\n��ȯ�� ȭ�� �µ��� %.2f �Դϴ�. \n", CelToFah(Cel));
	
	printf("���� ȭ�� �µ��� ���� �µ��� ��ȯ �ұ��?");
	scanf("%f", &Fah);
	printf("\n��ȯ�� ȭ�� �µ��� %.2f �Դϴ�. \n ", CelToFah(Fah));
	
	return 0;
}
