#include <stdio.h>

int main(void)
{
	int iExam;
	
	scanf("%d", &iExam);
	
	if(iExam >= 90)
	{
		printf("A");
	}
	else if(iExam >= 80)
	{
		printf("B");
	}
	else if(iExam >= 70)
	{
		printf("C");
	}
	else if(iExam >= 60)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	
	return 0;
}
