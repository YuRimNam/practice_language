#include <stdio.h>

/*int z(int num) {
	num*=num;
	printf("%d", num);
	return num;
}

int main() {
	int num;
	scanf("%d", &num);
	z(num);
	return 0;
}*/

int z(int *num) {
	*num = *num * *num;
	printf("%d", *num);
}

int main() {
	int num;
	scanf("%d", &num);
	z(&num);
}
