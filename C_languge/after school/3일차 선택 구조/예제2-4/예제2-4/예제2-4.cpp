// 예제2-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int age = 0, money = 5000, dis = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	if (8 <= age && age < 60)
	{
		dis = dis + 0;
		printf("입장료 : %d\n", money*(100 - dis) / 100);
	}
	else if (60 <= age)
	{
		dis = dis + 50;
		printf("입장료 : %d\n", money*(100 - dis) / 100);
	}
	else
	{
		dis = dis + 100;
		printf("입장료 : %d\n", money*(100 - dis) / 100);
	}
		
    return 0;
}

