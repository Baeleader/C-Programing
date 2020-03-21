#include <stdio.h>

int main(void)
{
	//======================================
	
	
	char S[20], P[100];
	int R, i;
		
	scanf("%d", &R);
	scanf("%[^\n]", S);
	
	
	for(i = 0; i < R; i++)
	{
		P[i] = S[i];
	}
	printf("%s", P[100]);
	
	
	
	
	return 0;
}
