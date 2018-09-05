#include <stdio.h>

int swap(int *n1, int *n2, int *n3) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = *n3;
	*n3 = temp;
	printf("%d %d %d", *n1, *n2, *n3);
}

int main() {
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	swap(&n1, &n2, &n3);
}
