// 예제 1_과제1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int as1;
	printf("숫자를 입력하세요.");
	scanf_s("%d", &as1);
	printf("입력된 숫자:%d\n아스키 코드:%c\n", as1, as1);
    return 0;
}

