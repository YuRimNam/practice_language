// 세 정수 입력.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("첫 수:%d\n", a);
	printf("두 번째 수:%d\n", b);
	printf("세 번째 수:%d\n", c);
	printf("누적 합계:%d\n", a + b + c);
    return 0;
}

