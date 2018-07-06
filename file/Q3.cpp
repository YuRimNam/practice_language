#include <stdio.h>
#include <string.h>

char name[20], memo[200];
int age;
void input( FILE *in )
{
	fscanf(in, "%s %d\n", name, &age);
	fgets(memo, 200, in);
}
void output( FILE *out )
{
	fprintf(out, "이름:%s\n", name);
	fprintf(out, "나이:%d\n", age);
	fprintf(out, "수상실적:%s\n", memo);
}
int main()
{
	FILE *in=fopen("input3.txt", "r");
	FILE *out=fopen("output3.txt", "w");
	int N;
	fscanf(in, "%d", &N);
	while (N--)
	{
		input(in);
		output(out);
	}
	fclose(in);
	fclose(out);
	return 0;
}
