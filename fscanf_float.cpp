#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned int UINT;
typedef unsigned short USHORT;

int main(void)
{
	//-----------------------------------------
	// [1] file 열기 및 변수 선언 
	//-----------------------------------------
	FILE * fp_float = fopen("Sample_float.txt", "r");
	FILE * fp_float_result = fopen("Sample_float_result.txt", "w");
	
	float fFirst, fSecond, fThird;
	
	
	//-----------------------------------------
	// [2] 파일에 있는 데이터를 fscanf를 통해 읽은 후, 변수에 저장 
	//-----------------------------------------
	printf("This is the process to get three floating number from text file\n");
	fprintf(fp_float_result, "This is the process to get three floating number from text file\n");
	fscanf(fp_float, "%f %f %f", &fFirst, &fSecond, &fThird);
	
	// ------------------------------------------------------------
	// printf를 통해 도스창에 출력 
	// ------------------------------------------------------------
	printf("First = %.2f, Second = %.2f, Third = %.2f\n", fFirst, fSecond, fThird); 
	fprintf(fp_float_result, "First = %.2f, Second = %.2f, Third = %.2f\n", fFirst, fSecond, fThird);
	
	
	
	//-----------------------------------------
	// [3] file 종료
	//----------------------------------------- 
	fclose(fp_float);
	fclose(fp_float_result);
	return 0;
}
