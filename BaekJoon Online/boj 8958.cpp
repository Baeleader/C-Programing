#include <stdio.h>
#include <math.h>

int main(void)
{
	int iSum = 0, iFor;
	int iTest;
	char cQuiz[80];
	
	scanf("%d", &iTest);
	
	for(iFor = 0; iFor < iTest; iFor++)
	{
		scanf("%[^\n]", cQuiz[iFor]);
		
		if(cQuiz[iFor] == 'O' || cQuiz[iFor] == 'o')
		{
			iSum += 1;
			iTest = iSum;
		}
		else if(cQuiz[iFor] == 'X' || cQuiz[iFor] == 'x')
		{
			iSum = 0;
		}
		else{
		break; 
		}
	}
	
	
	
	return 0;
}
