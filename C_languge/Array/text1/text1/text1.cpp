// text1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int score[10] = { 95,100,98,78,65,55,78,52,97,98 };
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", score[i]);
    return 0;
}

