// 프린트7-Q9-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su = 0, cnt = 0, sum = 0, avg;
	while (1) 
	{
		scanf("%d", &su);
		if (su == 0) break;
		if (su % 2 == 0) continue;
		sum=sum+su;
		cnt++;
	}
	avg = sum / cnt;
	printf("홀수의 합=%d\n", sum);
	printf("홀수의 평균=%d\n", avg);
    return 0;
}

