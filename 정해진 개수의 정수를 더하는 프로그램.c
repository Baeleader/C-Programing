#include <stdio.h> 

int main(void)
{
	int number, x, i, sum = 0;
	printf("정수의 개수를 입력하세요 :");
	scanf("%d", &number);
	
	for(i = 0; i < number; i++)
		{
			printf("정수의 값을 입력하세요 :");
			scanf("%d", &x);
			sum += x;
		}
		
	printf("전체정수의 값은 %d입니다", sum);
	return 0; 
}
