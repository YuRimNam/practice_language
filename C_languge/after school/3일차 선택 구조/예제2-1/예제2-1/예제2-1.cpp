// 예제2-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	printf("세 개의 정수 입력 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (b > c) 
		{
			printf("가장 작은 수 : %d\n", c);
		}
		else
			printf("가장 작은 수 : %d\n", b);
	}
	else if (a > c)
	{
		printf("가장 작은 수 : %d\n", c);
	}
	else
		printf("가장 작은 수 : %d\n", a);
	return 0;
}

