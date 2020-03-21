#include <stdio.h>

int main(void)
{
	char cSentence[1000000];
	int i, sum = 0, ispace = 1;
	
	scanf("%[^\n]", cSentence);
	
	
	for(i = 0; cSentence[i]; i++)
	{
		if(cSentence[i] == ' ')
			ispace = 1;
		else if(ispace){
			ispace = 0;
			sum++;
		}
	}
	
	printf("%d", sum);
	
	
	return 0;
}
