#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned int UINT;
typedef unsigned short USHORT;

int main(void)
{
	//-----------------------------------------
	// [1] file 열기 및 변수 선언 
	//-----------------------------------------
	FILE * fp_String = fopen("Sample_string.txt", "r");
	FILE * fp_String_result = fopen("Sample_string_result.txt", "w");
	
	char cSentence[100];
	
	
	//-----------------------------------------
	// [2] 파일에 있는 데이터를 fscanf를 통해 읽은 후, 변수에 저장 
	//-----------------------------------------
	printf("This is the process to get Sentence from text file\n");
	fprintf(fp_String_result, "This is the process to get Sentence from text file\n");
	fscanf(fp_String, "%[^\n]", cSentence);
	
	// ------------------------------------------------------------
	// printf를 통해 도스창에 출력 
	// ------------------------------------------------------------
	printf("Your String is %s\n", cSentence);
	
	// txt 파일 생성 
	fprintf(fp_String_result, "Your String is %s\n", cSentence);
	
	
	
	//-----------------------------------------
	// [3] file 종료
	//----------------------------------------- 
	fclose(fp_String);
	fclose(fp_String_result);
	return 0;
}
