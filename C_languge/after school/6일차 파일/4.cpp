#include <stdio.h>

int main()
{
	int i, cnt[10];
	FILE *in=fopen("input2.txt", "r");
	FILE *out=fopen("output2.txt", "w");
	
	for (i=0; i<10; i++)
		fscanf(in, "%d", &cnt[i]);
		
	for (i=0; i<10; i++)
	{
		if ((i+1)%2==0)
		{
		fprintf(out, "%d\n", cnt[i]);
		}
	}
}
	
