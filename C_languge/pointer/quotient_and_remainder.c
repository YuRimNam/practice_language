#include <stdio.h>


void func(int *mod, int *rem)
{
	int su;
	scanf("%d", &su);
	*mod = su/4;	
	*rem = su%4;
}


int main()
{
	int mod, rem;
	func(&mod, &rem);
	printf("¸ò : %d, ³ª¸ÓÁö : %d", mod, rem);
	return 0;
}
