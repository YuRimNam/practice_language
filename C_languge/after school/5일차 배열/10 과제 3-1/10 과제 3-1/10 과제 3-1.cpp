// 10 과제 3-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char str[3][3] = { 0, };
	for (int i = 0; i < 3; i++)
		scanf("%s", str[i]);
	for (int i = 2; i > -1; i--)
		printf("%s\n", str[i]);
    return 0;
}

