#include <stdio.h>

int main(void)
{
	char string[100] = { };
	int i;
	
	scanf("%s", string);//입력받고 싶은 문자열 입력 
	
	for(i = 0; i < 100; i++)//반복문 이용 배열 출력 
	{
		if(i % 10 == 0 && i != 0)// 10개씩 끊어서 출력 조건문  
		{
			printf("\n");
		}
		printf("%c", string[i]); // 입력받은 문자 출력 
	}
	
	return 0;
}
