#include <stdio.h>

int main()
{
	int kor, eng, sum=0, j;
	double avg=0;
	char name[20], i[100];
	
	FILE *in=fopen("input1.txt","r");
	FILE *out=fopen("output1.txt","w");
	
	fscanf(in, "%s %d %d", name, &kor, &eng);
	sum=kor+eng;
	avg= (double) sum/2;
	fprintf(out, "%s %d %.1lf", name, sum, avg);

	printf("%s %d %.1lf", name, sum, avg);
	return 0;
}
