#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned int UINT;
typedef unsigned short USHORT;

int main(void)
{
	//-----------------------------------------
	// [1] file ���� �� ���� ���� 
	//-----------------------------------------
	FILE * fp_int2 = fopen("Sample_int2.txt", "r");
	FILE * fp_int2_result = fopen("Sample_int2_result.txt", "w");
	
	int iFirst, iSecond, iThird;
	
	
	//-----------------------------------------
	// [2] ���Ͽ� �ִ� �����͸� fscanf�� ���� ���� ��, ������ ���� 
	//-----------------------------------------
	printf("This is the process to get three number from text file\n");
	fprintf(fp_int2_result, "This is the process to get three number from text file\n");
	fscanf(fp_int2, "%d %d %d", &iFirst, &iSecond, &iThird);
	
	// ------------------------------------------------------------
	// printf�� ���� ����â�� ��� 
	// ------------------------------------------------------------
	printf("First = %d, Second = %d, Third = %d\n", iFirst, iSecond, iThird); 
	fprintf(fp_int2_result, "First = %d, Second = %d, Third = %d\n", iFirst, iSecond, iThird);
	
	
	
	//-----------------------------------------
	// [3] file ����
	//----------------------------------------- 
	fclose(fp_int2);
	fclose(fp_int2_result);
	return 0;
}
