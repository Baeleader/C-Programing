#include <stdio.h>

int main()
{
	int i, n, j, sum = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &j);
		sum += j;
	}
	printf("%d",sum);
	return 0;
}
