// 심화학습.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);
	(num >= 0) ? printf("절대값 : %d\n", num) : printf("절대값 : %d\n", num*(-1));
    return 0;
}

