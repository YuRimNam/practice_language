// 과제2-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int star[5][5] = { 0, }, k = 0, j = 0, i = 0, cnt = 1;
	for (i = 0; i < 5; i++)
	{
		for (j = 5; j > 4-i; j--)
		{
			printf("%3d", cnt);
			cnt++;
		}
		printf("\n");
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 5; j > i; j--)
		{
			printf("%3d", cnt);
			cnt++;
		}
		printf("\n");
	}
    return 0;
}

