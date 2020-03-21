#include <stdio.h>

int main(void)
{
	int n=0, x=0, i, A[10000];
	
	scanf("%d %d", &n, &x);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		if(x > A[i])
		{
			printf("%d ", A[i]);
		}
	}
	
	return 0;
}
