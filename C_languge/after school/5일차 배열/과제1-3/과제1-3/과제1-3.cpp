// 과제1-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a[4] = { 1,5,7,9 }, b[4] = { 2,4,8,10 }, c[8] = { 0, }, j = 0, i = 0, k = 0, q = 0;
	for (k = 0; k < 8; k++)
	{
		if (a[i] < b[j]) 
		{
			c[k] = a[i];
			i=i+1;
		}
		else 
		{
			c[k] = b[j];
			j=j+1;
		}
	}
	for (q = 0; q < 8; q++)
		printf("%d ", c[q]);
    return 0;
}

