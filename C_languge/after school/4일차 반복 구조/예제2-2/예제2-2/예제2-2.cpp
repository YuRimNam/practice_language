// 예제2-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int sum = 0;
	for (int i = 0; i <= 100; i += 2)
	{
		sum += i;
	}
	printf("%d\n", sum);
    return 0;
}

