#include <stdio.h>

int main(void)
{
	char cExam1 = 0; // ���� 3�� ���� 
	char cExam2 = 0;
	char cExam3 = 0;
	
	// ���� ���� �Էº� 
	printf("Enter three character\n"); 
	scanf("%c %c %c", &cExam1, &cExam2, &cExam3);
	
	//���� ���� ��º� 
	printf("Three characters are %c %c %c\n", cExam1, cExam2, cExam3);
	printf("Three numbers are %d %d %d\n", cExam1, cExam2, cExam3);
	
//	// ���� ���� �Էº� 
	printf("Enter three number\n");
	scanf("%d", &cExam1);
	scanf("%d", &cExam2);
	scanf("%d", &cExam3);
//	// ���� ���� ��º� 
	printf("Three characters are %c %c %c\n", cExam1, cExam2, cExam3);
//	
	return 0;
	
}
