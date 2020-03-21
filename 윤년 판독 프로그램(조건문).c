#include <stdio.h>

int main()
{
	/*
	 윤년  => 4년마다, 그렇지만 100년 단위일 때는 윤년에 해당하지 않도록 
	 윤년 => 400년 단위일 때는 어떤 상황이든간에 윤년으로 설정한다 
	*/
	int year;
	
	printf("확인하고싶은 년도를 입력하시오.\n");
	scanf("%d", &year);
    
	if((year % 4 == 0 && year % 100) || year % 400 ==0) 
	{
		printf("%d년은 윤년입니다.\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
	return 0;
}
