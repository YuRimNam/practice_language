// 예제1_과제2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char as1;
	printf("아스키 코드를 입력하세요.");
	scanf_s("%c", &as1);
	printf("아스키 문자 입력:%c\n아스키 코드 값:%d\n", as1, as1);
    return 0;
}

