// 과제2-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("합:%d\n", a + b + c);
	printf("평균:%d\n", (a + b + c) / 3);
    return 0;
}

