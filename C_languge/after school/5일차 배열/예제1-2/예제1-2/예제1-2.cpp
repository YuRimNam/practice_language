// 예제1-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num[10], even = 0, odd = 0;
	for (int i = 0; i <= 9; i++)
	{
		scanf_s("%d", &num[i]);
	}
	for (int i = 0; i <= 9; i++)
	{
		if (i % 2 == 0)
			even += num[i];
		else
			odd += num[i];
	}
	printf("홀수 번째 합: %d\n짝수 번째 합: %d\n", even, odd);
    return 0;
}

