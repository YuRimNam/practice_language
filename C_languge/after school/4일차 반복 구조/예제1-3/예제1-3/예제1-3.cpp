// 예제1-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int cnt = 0, su = 0, sum = 0;
	double avg = 0;
	printf("정수를 몇 개 입력하시겠습니까? \n");
	scanf_s("%d", &cnt);
	for (int i = 1; i < cnt; i++)
	{
		scanf_s("%d", &su);
		sum += su;
	}
	avg = (double) sum / cnt;
	printf("%f", avg);
    return 0;
}

