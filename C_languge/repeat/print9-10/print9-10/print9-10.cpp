// print9-10.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num = 2, cnt = 9;
	while (num <= 4) 
	{
		for (int i = 1; i <= cnt; i++)
		{
			printf("%d×%d=%d\n", num, i, num*i);
		}
		num++;
		printf("\n");
	}
    return 0;
}

