#include <stdio.h>


void rotate(int *pa, int *pb, int *pc)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;	
}

int main()
{
	int a=1, b=2, c=3;
	char stop;
	do
	{
		printf("%d:%d:%d", a,b,c);
		stop = getchar();
		rotate(&a, &b, &c);
	} while (stop == '\n');  
}
