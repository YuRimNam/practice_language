// 에제1-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int cla1, cla2;
	double avg[6] = { 85.6,79.5,83.1,80.0,78.2,75.0 }, sum = 0;
	printf("두 반 : ");
	scanf_s("%d %d", &cla1, &cla2);
	sum =  avg[cla1-1] + avg[cla2-1];
	printf("%.1lf\n", sum);
    return 0;
}

