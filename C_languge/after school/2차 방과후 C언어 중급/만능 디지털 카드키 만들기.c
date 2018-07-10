#include <stdio.h>

int big;

int compare(int num1, int num2, int num3)
{
	if (num1>num2)
		big=num1;
	else 
		big=num2;
		
	if (big>num3)
		big=big;
	else
		big=num3;
		
	return big;
}

int main()
{
	int num1, num2, num3, i, key;
	printf("보안키 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1<1000&&num2<1000&&num3<1000)
	{
		compare(num1, num2, num3);
		for (i=1; i<=big; i++)
		{
			if (num1%i==0 && num2%i==0 &&num3%i==0)
				key = i;
		}
		printf("%d\n", key);
	}
	else
	{
		printf("값이 넘어감!\n"); 	
	}
}
