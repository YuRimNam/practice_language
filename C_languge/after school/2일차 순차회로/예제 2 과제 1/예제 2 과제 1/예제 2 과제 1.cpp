// 예제 2 과제 1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int joungsu1 = 0, joungsu2 = 0;
	printf("정수 값을 입력하세요:");
	scanf_s("%d", &joungsu1);
	joungsu2 = ~joungsu1 + 1;
	printf("출력값 입니다:%d\n", joungsu2);
	/*int num1 = 15;
	int num2 = ~num1;

	printf("NOT연산의 결과:%d\n", num2);*/
    return 0;
}

