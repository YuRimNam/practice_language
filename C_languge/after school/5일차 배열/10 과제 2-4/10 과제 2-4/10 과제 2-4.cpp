// 10 과제 2-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char str[50] = { 0, };
	int len = 0;

	scanf("%s", str);

	while (str[len] != '\0')
		len++;

	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len+i; j++)
		{
			printf("%c", str[(j + 1) % len]);
		}
		printf("\n");
	}
    return 0;
}

