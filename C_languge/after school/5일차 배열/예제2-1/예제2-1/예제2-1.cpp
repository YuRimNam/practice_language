// 예제2-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, b[10], i;
	for (i = 0; i < 10; i++)
		b[i] = a[(i+1)%10];
	for (i = 0; i < 10; i++)
		printf("%d ", b[i]);
    return 0;
}

