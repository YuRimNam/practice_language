// 九九段.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su;
	scanf_s("%d", &su);
	for (int i = 0; i <= 9; i++)
	{
		printf("%d×%d=%d\n", su, i, su*i);
	}
    return 0;
}

