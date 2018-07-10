// 예제1-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }, year, month;
	
	while (1)
	{
		printf("YEAR : ");
		scanf_s("%d", &year);
		printf("MONTH : ");
		scanf_s("%d", &month);
		if (month == 0) break;
		if (month > 12)
		{
			printf("잘못 입력하였습니다.");
			continue;
		}
		if (month == 2)
		{
			if (year % 4 == 00 || year % 100 != 0 || year % 400 == 0)
				printf("입력하신 달의 날 수는 %d일 입니다.\n", day[month - 1] + 1);
		}
		else
		printf("입력하신 달의 날 수는 %d일 입니다.\n", day[month-1]);
	}
    return 0;
}

