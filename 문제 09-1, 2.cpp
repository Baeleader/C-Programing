/*
섭씨(Celsius)온도를 입력하면 화씨(Fahrenheit)온도를 반환하는 CelToFah라는 이름의 함수와 그 반대로  
화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel라는 이름의 함수를 정의하고 
이두 함수를 호출하는 에제를 완성해보자. 참고로 섭씨와 화씨간 온도변환의 공식은 다음과 같다.
Fah = 1.8 * Cel + 32
Cel = Fah / 1.8 - 32
*/

#include <stdio.h>

float CelToFah(float Cel)
{
	float Fah;
	
	Fah = 1.8 * Cel + 32;
	
	return Fah;
}

float FahToCel(float Fah)
{
	float Cel;
	
	Cel = (Fah-32) / 1.8;
	
	return Cel;
}

int main(void)
{
	float Fah, Cel;
	
	printf("몇의 섭씨 온도를 화씨 온도로 변환 할까요?");
	scanf("%f", &Cel);
	printf("\n변환된 화씨 온도는 %.2f 입니다. \n", CelToFah(Cel));
	
	printf("몇의 화씨 온도를 섭씨 온도로 변환 할까요?");
	scanf("%f", &Fah);
	printf("\n변환된 화씨 온도는 %.2f 입니다. \n ", CelToFah(Fah));
	
	return 0;
}
