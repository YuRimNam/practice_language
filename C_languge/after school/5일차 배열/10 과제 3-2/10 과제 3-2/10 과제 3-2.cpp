// 10 과제 3-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char word[10][20] = { "pen","pencil","class","book","lion","lesson","tel","champion","information","computer" }, len;

	scanf_s("%c", &len);
	for (int i = 0; i < 10; i++)
	{
		if (len == word[i][0])
			printf("%s\n", word[i]);
		if (len != word[i][0])
		{
			printf("찾는 단어가 없습니다.\n");
			break;
		}
	}
    return 0;
}

