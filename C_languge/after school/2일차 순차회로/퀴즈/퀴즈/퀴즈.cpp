// 퀴즈.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char d;
	printf("문자를 입력하세요:");
	scanf_s("%c", &d);

	if (d > 97)
	{
		printf("%c\n", d - 32);
	}
	else
	{
		printf("%c\n", d + 32);
	}
    return 0;
}

