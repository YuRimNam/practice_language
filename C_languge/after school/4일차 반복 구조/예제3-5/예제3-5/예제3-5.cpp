// 예제3-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su, sum = 1;
	scanf_s("%d", &su);
	for (int i = 1; i <= su; i++)
	{
		sum = sum * i;
	}
	printf("%d", sum);
    return 0;
}

