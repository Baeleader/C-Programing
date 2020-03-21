#include <stdio.h>
#include <math.h>

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

// 상수 선언 
#define PI 3.141592 

int main(void)
{
	// ---------------------------------------------------
	// 원 면적 및 둘레 계산하기  
	// ---------------------------------------------------

	// [1] 변수 선언  
	float fRadious=0.0;
	float fArea=0.0;
	float fLength=0.0; 
	int   iExample=9;
	
	// [2] 사용자 입력(반지름)  
	printf("Enter a radious\n"); 
	scanf("%f", &fRadious);
	
	// [3] 원 면적/둘레 계산 및 출력  
	fArea   = fRadious*PI*PI;
	//fArea   = fRadious*pow(PI, 2);	// [3.1]
	fLength = 2*PI*fRadious;	
	
//	// [3.2] Example of <math.h>
//	iExample = sqrt(iExample);
//	printf("%d\n", iExample);	 

	printf("Area: %.2f, Length: %.2f\n", fArea, fLength);	
	//printf("Area: %.2f, Length: %.2f\n", fRadious*PI*PI, 2*PI*fRadious);	// [3.3]
	
	return 0;
} 
