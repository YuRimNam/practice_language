// 10 과제 2-.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char str[50] = { 0, };
	int cnt = 0, sum = 0;
	
	scanf_s("%c", str);

	while (str[cnt] != '\0')
		cnt++;
	
	for (int i = cnt; i >= 0; i--)
	{
		if (str[i] > sum)
			sum = str[i];
	}
	printf("아스키 코드 값이 가장 큰 문자: %c\n", sum);
    return 0;
}

