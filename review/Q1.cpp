#include <stdio.h>

float x_power(float x, int n);

int main()
{
	int n;
	float x;
	printf("INPUT:");
	scanf("%f %d", &x, &n);
	printf("%.0f power %d=%.0f\n", x, n, x_power(x,n));
}

float x_power(float x, int n)
{
	float y=1.0;
	for ( ; n>0; n--)
		y *= x;
	return(y);
}
