#include <stdio.h>

// 'stream' : 데이터 이동의 경로가 되는 다리 (한 방향으로 흐르는 데이터의 흐름)
// 입력스트림과 출력스트림으로 구분

// fofen 함수를 호출할때 두가지가 인자로 전달되어야 한다.
// 첫 번째 전달인자 - 스트림을 형성할 파일이름
// 두 번째 전달인자 - 형성하고자 하는 스트림의 종류
 
int main(void)
{
	FILE * fp = fopen("data.txt", "wt"); // 파일 data.txt와 스트림을 형성하되 wt모드로 스트림을 형성하라
										 // wt 모드 : 텍스트 데이터를 쓰기 위한 출력 스트림
										 // rt 모드 : 텍스트 데이터를 읽기 위한 입력 스트림 
	if(fp == NULL) 
	{
		puts("파일오픈 실패!");
		return -1; 
	}
	
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	
	fclose(fp); // 운영체제가 할당한 자원의 반환, 버퍼링 되었던 데이터의 출력
	 
	
	return 0;
}
