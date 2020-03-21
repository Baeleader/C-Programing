#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned int UINT;
typedef unsigned short USHORT;

int main(void)
{
	//-----------------------------------------
	// [1] file ���� �� ���� ���� 
	//-----------------------------------------
	FILE * fp_String = fopen("Sample_string.txt", "r");
	FILE * fp_String_result = fopen("Sample_string_result.txt", "w");
	
	char cSentence[100];
	
	
	//-----------------------------------------
	// [2] ���Ͽ� �ִ� �����͸� fscanf�� ���� ���� ��, ������ ���� 
	//-----------------------------------------
	printf("This is the process to get Sentence from text file\n");
	fprintf(fp_String_result, "This is the process to get Sentence from text file\n");
	fscanf(fp_String, "%[^\n]", cSentence);
	
	// ------------------------------------------------------------
	// printf�� ���� ����â�� ��� 
	// ------------------------------------------------------------
	printf("Your String is %s\n", cSentence);
	
	// txt ���� ���� 
	fprintf(fp_String_result, "Your String is %s\n", cSentence);
	
	
	
	//-----------------------------------------
	// [3] file ����
	//----------------------------------------- 
	fclose(fp_String);
	fclose(fp_String_result);
	return 0;
}
