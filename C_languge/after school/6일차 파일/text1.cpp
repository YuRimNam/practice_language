#include <stdio.h>

int main()
{
	FILE *fp1=fopen("document.txt", "r");
	FILE *fp2=fopen("result.txt", "w");
	char c;
	
	while (fscanf(fp1, "%c", &c)!=EOF)
	{
		if (c >= 97 && c < 129)
		fprintf(fp2, "%c", c-32);
		else 
		fprintf(fp2, "%c", c);
	}
	
	fclose(fp1);
	fclose(fp2);
}
