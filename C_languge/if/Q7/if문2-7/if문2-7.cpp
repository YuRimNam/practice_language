// if문2-7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	float a, b;
	printf("두 실수를 입력하세요.");
	scanf_s("%f %f", &a, &b);
	if (a >= 4.0&&b >= 4.0)
	{
		printf("A\n");
	}
	else if (a >= 3.0&&b >= 3.0)
	{
		printf("B\n");
	}
	else
		printf("C\n");
    return 0;
}

