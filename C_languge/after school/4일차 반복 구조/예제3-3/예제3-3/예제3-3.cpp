// 예제3-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int su1, su2, su3 = 0, sum = 0;
	scanf_s("%d %d", &su1, &su2);
	if (su1 > su2)
	{
		su3 = su2;
		su2 = su1;
		su1 = su3;
	}
	for (int i = su1; i <= su2; i++)
	{
		sum += i;
	}
	printf("%d", sum);
    return 0;
}

