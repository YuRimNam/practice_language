// 예제2_과제2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int gin;
	printf("10진수 값을 입력하세요.");
	scanf_s("%d", &gin);
	printf("16진수로 변환:%x", gin);
    return 0;
}

