#include <stdio.h>

int main()
{
	int i, n, sum = 0;
	char *j;
	
	scanf("%d", &n);
	scanf("%s", j);
	
	for(i = 0; i < n; i++)
	{
		sum += j[i] - '0';
	}
	
	printf("%d",sum);
	return 0;
}
