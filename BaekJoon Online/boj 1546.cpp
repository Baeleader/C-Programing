#include <stdio.h>

int main(void)
{
	int N, i, sub[1000]; // ���� ����, �ݺ��� ����, ���� ���� 
	int M = 0, sum = 0; // �ִ� , �հ� 
	float avg = 0; // ��� 
	
	scanf("%d", &N); // ���� �Է� 
	
	// ������ �Է� 
	for(i = 0; i < N; i++)
	{
		scanf("%d", &sub[i]);
	}
	
	// �ִ� ���ϱ� 
	for(i = 0; i < N; i++)
	{
		if(M < sub[i])
		{
			M = sub[i];
		}
	}
	
	for(i = 0; i < N; i++)
	{
		sub[i] = sub[i] / M * 100; // �ִ� ������ ��������� ���� / M * 100 
	}
	
	for(i = 0; i < N; i++)
	{
		sum = sum + sub[i];
	}
	
	avg = sum / N;
	
	printf("%f", avg);
	
	
	return 0;
}
