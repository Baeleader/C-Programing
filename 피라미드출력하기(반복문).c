#include <stdio.h>
#define N 20

int main()
{
	int i, j;
	for(i = 1; i < N; i++)
	{
		for(j = N - i - 1; j > 0; j--)
			{
				printf("  ");
			}
		for(j = 0; j < i; j++)
			{
				printf("¡Ú");
			}
		for(j = 0; j < i - 1; j++)
			{
				printf("¡Ú");
			}
		printf("\n");
		}
		return 0;
}
