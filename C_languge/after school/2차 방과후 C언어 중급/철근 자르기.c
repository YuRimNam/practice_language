#include <stdio.h>

int main()
{
	int n, k, re=0, i;
	
	scanf("%d %d", &n, &k);
	re = n/k;
	
	if (re<9999)
	{
		for (i=1; i<=re; i++)
		{
			printf("F-%04d\n", i);
		}
	}
	else 
		printf("번호 초과 오류\n");
}
