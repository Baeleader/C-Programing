#include <stdio.h>

int main(void)
{
	int N, i, sub[1000]; // 과목 갯수, 반복문 인자, 과목 성적 
	int M = 0, sum = 0; // 최댓값 , 합계 
	float avg = 0; // 평균 
	
	scanf("%d", &N); // 갯수 입력 
	
	// 과목성적 입력 
	for(i = 0; i < N; i++)
	{
		scanf("%d", &sub[i]);
	}
	
	// 최댓값 구하기 
	for(i = 0; i < N; i++)
	{
		if(M < sub[i])
		{
			M = sub[i];
		}
	}
	
	for(i = 0; i < N; i++)
	{
		sub[i] = sub[i] / M * 100; // 최댔값 구한후 모든점수를 점수 / M * 100 
	}
	
	for(i = 0; i < N; i++)
	{
		sum = sum + sub[i];
	}
	
	avg = sum / N;
	
	printf("%f", avg);
	
	
	return 0;
}
