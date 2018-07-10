// 심화학습.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a[10] = { 11,18,26,27,39,57,63,75,76,80 }, key = 57, mid = 0, high = 9, low = 0;
	printf("key : 57\n");
	while (1)
	{
		mid = (high + low) / 2;
		if (a[mid] < key)
			low = mid + 1;
		else
			high = mid - 1;
		if (a[mid] == key) break;
	}
	printf("인덱스 번호 %d에서 탐색 성공\n", mid);
    return 0;
}

