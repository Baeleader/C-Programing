//----------------------------------------------------
// 세 개의 정수를 인자로 전달받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의
// 그리고 이 함수들을 호출하는 적절한 main 함수도 작성하 
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
	
	printf("세 개의 정수를 입력하세여 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("세 개의 정수중 최댓값 : %d \n", MaxNumber(num1, num2, num3));
	printf("세 개의 정수중 최솟값 : %d \n", MinNumber(num1, num2, num3));

	return 0;
}
