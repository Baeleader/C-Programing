#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned int UINT;
typedef unsigned short USHORT;

int main(void)
{
	//-----------------------------------------
	// [1] file ���� �� ���� ���� 
	//-----------------------------------------
	FILE * fp_char = fopen("Sample_char.txt", "r");
	FILE * fp_char_result = fopen("Sample_char_result.txt", "w");
	
	char cFirst, cSecond, cThird;
	
	
	//-----------------------------------------
	// [2] ���Ͽ� �ִ� �����͸� fscanf�� ���� ���� ��, ������ ���� 
	//-----------------------------------------
	printf("This is the process to get three characters from text file\n");
	fprintf(fp_char_result, "This is the process to get three characters from text file\n");
	fscanf(fp_char, "%c %c %c", &cFirst, &cSecond, &cThird);
	
	// ------------------------------------------------------------
	// printf�� ���� ����â�� ��� 
	// ------------------------------------------------------------
	printf("First = %c, Second = %c, Third = %c\n", cFirst, cSecond, cThird);
	printf("First = %d, Second = %d, Third = %d\n", cFirst, cSecond, cThird);
	
	// txt ���� ���� 
	fprintf(fp_char_result, "First = %c, Second = %c, Third = %c\n", cFirst, cSecond, cThird);
	fprintf(fp_char_result, "First = %d, Second = %d, Third = %d\n", cFirst, cSecond, cThird);
	
	
	
	//-----------------------------------------
	// [3] file ����
	//----------------------------------------- 
	fclose(fp_char);
	fclose(fp_char_result);
	return 0;
}
