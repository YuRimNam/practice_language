// 예제1-과제1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	printf("두 수 입력 : ");
	scanf_s("%d %d", &a, &b);
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	printf("두 수의 차 : %d\n", a - b);
    return 0;
}

