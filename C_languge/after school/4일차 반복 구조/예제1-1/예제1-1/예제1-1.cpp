// 예제1-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su;
	scanf_s("%d", &su);
	for (int i = 1; i < su+1; i++)
	{
		printf("%d ", 3 * i);
	}
    return 0;
}

