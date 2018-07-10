#include <stdio.h>

int main()
{
	char *ptr="PROGRAMING", *str;
	str=ptr;
	while (*str!='\0')
		str++;
	printf("%d", str-ptr);
}
