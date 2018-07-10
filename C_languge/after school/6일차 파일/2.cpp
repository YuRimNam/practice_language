#include <stdio.h>

int main()
{
	char i[100], j;
	FILE *fp=fopen("me.txt","r");
	
	for (j=0;j<5;j++)
	{
	fgets(i, 102, fp);
	printf("%s",i);	
	}
}
