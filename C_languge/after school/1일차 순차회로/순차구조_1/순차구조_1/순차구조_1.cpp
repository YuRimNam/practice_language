// 순차구조_1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);
	printf("%d\n%d", a / b, a%b);
    return 0;
}

