#include <stdio.h>

int main()
{
	int su[10], i;
	FILE *fin, *fout;
	fin = fopen("./temp/in.txt", "r");
	fout = fopen("./temp/out.txt", "w");

	for (i = 0; i < 10; i++)
		fscanf(fin, "%d", &su[i]); 
	for (i = 1; i < 10; i += 2)
		fprintf(fout, "%d", su[i]);

	fprintf(fout, "\n");
	
	fclose(fin);
	fclose(fout);
    return 0;
}
