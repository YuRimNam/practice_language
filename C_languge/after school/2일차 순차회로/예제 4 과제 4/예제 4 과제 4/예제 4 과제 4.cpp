// 예제 4 과제 4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int yeoundo, gob = 0;
	printf("연도를 입력하세요:");
	scanf_s("%d", &yeoundo);
	gob = yeoundo % 4==0 && yeoundo % 100 !=0 || yeoundo % 400==0;
	printf("%d", gob);
    return 0;
}

