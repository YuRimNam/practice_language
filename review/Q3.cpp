#include <stdio.h>

int f(int n);
int main()
{
	int a;
	a=f(5);
	printf("%d\n",a);
}
int f(int n)
{
	if (n==1)
		return(1);
	else 
		return(n*f(n-1));
}
