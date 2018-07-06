#include <stdio.h>

/*int sum(int m, int k)
{
	int c;
	++m;
	++k;
	c=m+k;
	printf("%5d%5d%5d\n",m,k,c);
	return(c);
}

int main()
{
	int m=3, k=5, c;
	c=sum(m,k);
	printf("%5d%5d%5d\n",m,k,c);
}*/

int sum(int *m, int *k)
{
	int c;
	++*m;
	++*k;
	c=*m+*k;
	printf("%5d%5d%5d\n",*m,*k,c);
	return(c);
}

int main()
{
	int m=3, k=5, c;
	c=sum(&m,&k);
	printf("%5d%5d%5d\n",m,k,c);
}
