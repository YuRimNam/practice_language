// print13-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void max1(int d);
void max2(int d);

void max1(int d)
{
	int max = 0;
	if (d > max) max = d;
	printf("max=%d\n", max);
}

void max2(int d)
{
	static int max = 0;
	if (d > max) max = d;
	printf("max=%d\n", max);
}

int main()
{
	max1(100); max1(50); max1(70); max2(100); max2(50); max2(70);
    return 0;
}

