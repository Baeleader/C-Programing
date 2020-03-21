#include <stdio.h>

int main(void)
{
	int A, B, C, i, j;
	int Mul[1000];
	int D;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	Mul[1000] = A * B * C;
	
	printf("%d", Mul);

	
	for(i = 0; Mul[i]; i++)
	{
		if(Mul[i] == ' ')
		{
			break;
		}
		for(j = 0; j > 10; j++)
		{
			D = 0;
			if(Mul[i] == j)
			{
				D = D + 1;
			}
			
		}
		printf("%d\n", D);
	}
	
	return 0;
}
