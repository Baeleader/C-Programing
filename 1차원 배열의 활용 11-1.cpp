#include <stdio.h> // 기본 입출력헤더 
#include <math.h> // 수학적 함수 헤더 
#include <stdlib.h> // 난수 발생 헤더 rand(), srand((UINT)time(NULL));
#include <time.h> // 난수 랜덤발생 헤더 

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
	int i, arr[5];
	int Max = 0, Min = 0, Sum = 0;
	
	printf("정수 5개 입력 : \n");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	
	for(i = 0; i < 5; i++)
	{
		if(Max < arr[i])
		{
			Max = arr[i];
		}
		else if(Min > arr[i])
		{
			Min = arr[i];
		}
	}
	printf("최댓값 : %d \n", Max);
	
	printf("최솟값 : %d \n", Min);
	
	for(i = 0; i < 5; i++)
	{
		Sum += arr[i];
	}
	printf("총 합 : %d \n", Sum);
	
	return 0;
}
