#include <stdio.h>

int main(void)
{
	char cExam1 = 0, cExam2 = 0, cExam3 = 0;
	
	printf("Enter three number\n");
	scanf("%d %d %d", &cExam1, &cExam2, &cExam3);
	
	printf("Three character %c %c %c", cExam1, cExam2, cExam3);
	
	return 0;
}
