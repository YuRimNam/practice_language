// buncho.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int cho, bun, si;
	printf("초:");
	scanf_s("%d", &cho);
	si = cho / 3600;
	bun = si % 60;
	cho = cho % 60;
	printf("%d시간 %d분 %d초", si, bun, cho);
    return 0;
}

