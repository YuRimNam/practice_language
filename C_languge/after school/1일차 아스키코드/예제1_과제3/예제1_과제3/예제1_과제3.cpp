// 예제1_과제3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char as1;
	printf("아스키 코드를 입력하세요.");
	scanf_s("%c", &as1);
	printf("입력한 아스키 코드:%c\n변환한 아스키 코드:%c\n", as1, as1 + 32);
    return 0;
}

