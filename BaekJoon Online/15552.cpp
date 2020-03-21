#include <stdio.h>

int main(void)
{
	int i, test = 0;
	int A= 0, B = 0;
	scanf("%d", &test);
	
	for(i = 0; i < test; i++)
	{
		scanf("%d %d\n", &A, &B);

		printf("%d", A + B);
	}
	
	return 0;
	
}
