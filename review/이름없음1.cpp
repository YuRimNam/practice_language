#include <stdio.h>

int main()
{
	static char str[]="1234567890";
	char *p1=str, *p2=&str[3];
	
	while (p1<p2)
	{
		printf("%s\n",p1++);
	}
}
