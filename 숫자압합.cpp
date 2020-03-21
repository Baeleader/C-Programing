#include <stdio.h>

int main(void)
{
	int n=0, sum = 0;
	char num[100] = {0,};
	
	scanf("%d", &n);
	scanf("%s", num);
	
	for(int i = 0; i < n; i++)
	{
		sum += num[i] - '0';
	}
	printf("%d", sum);
	return 0;
}
