// 10 과제 1-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int main()
{
	/*char str[] = { "Hong Gil Dong" };
	int i;
	for (i = 3; i <= 6; i++)
		printf("%c", str[i]);
	printf("\n");*/

	/*char str[] = { "Good morning!" };
	int cnt[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &cnt[i]);
		printf("%c ", str[cnt[i]]);
	}*/

	char str[50];
	int cnt = 0, len = 0;

	printf("입력받을 글자가 몇 글자인지 입력해주세요. ");
	scanf_s("%d", &cnt);
	printf("글자를 입력해주세요.\n");
	for (int i = 0; i < cnt; i++)
	{
		scanf_s("%c", str[i]);
	}

	while (str[len] != NULL)
		len++;

	printf("문자열 길이는 %d입니다.\n", len);

	return 0;
}

