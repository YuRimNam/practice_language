#include <stdio.h>

void swap(double *pa, double *pb)
{
	double temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *maxp, double *midp, double *minp);

void line_up(double *maxp, double *midp, double *minp)
{
	if (*maxp<*midp) swap(maxp, midp);
	if (*maxp<*minp) swap(maxp, minp);
	if (*midp<*minp) swap(midp, minp);
} 

int main()
{
	double max, mid, min;
	
	printf("�Ǽ��� �� �� �Է� : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.1f, %.1f, %.1f\n", max, mid, min);	
}
