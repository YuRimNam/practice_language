// 10 과제 2-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char str[10] = { 0, };
	int cnt, len = 0;

	printf("입력받을 글자가 몇 글자인지 입력해주세요. ");
	scanf("%d", &cnt);
	printf("글자를 입력해주세요. ");

	for (int i = 0; i < cnt; i++)
		scanf("%c", &str[i]);

	while (str[len] != '\0')
		len++;

	printf("문자열 길이는 %d입니다.\n", len);

	for (int i = len-1; i >= 0; i--)
		printf("%c", str[i]);

    return 0;
}

