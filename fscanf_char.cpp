#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned int UINT;
typedef unsigned short USHORT;

int main(void)
{
	//-----------------------------------------
	// [1] file 열기 및 변수 선언 
	//-----------------------------------------
	FILE * fp_char = fopen("Sample_char.txt", "r");
	FILE * fp_char_result = fopen("Sample_char_result.txt", "w");
	
	char cFirst, cSecond, cThird;
	
	
	//-----------------------------------------
	// [2] 파일에 있는 데이터를 fscanf를 통해 읽은 후, 변수에 저장 
	//-----------------------------------------
	printf("This is the process to get three characters from text file\n");
	fprintf(fp_char_result, "This is the process to get three characters from text file\n");
	fscanf(fp_char, "%c %c %c", &cFirst, &cSecond, &cThird);
	
	// ------------------------------------------------------------
	// printf를 통해 도스창에 출력 
	// ------------------------------------------------------------
	printf("First = %c, Second = %c, Third = %c\n", cFirst, cSecond, cThird);
	printf("First = %d, Second = %d, Third = %d\n", cFirst, cSecond, cThird);
	
	// txt 파일 생성 
	fprintf(fp_char_result, "First = %c, Second = %c, Third = %c\n", cFirst, cSecond, cThird);
	fprintf(fp_char_result, "First = %d, Second = %d, Third = %d\n", cFirst, cSecond, cThird);
	
	
	
	//-----------------------------------------
	// [3] file 종료
	//----------------------------------------- 
	fclose(fp_char);
	fclose(fp_char_result);
	return 0;
}
