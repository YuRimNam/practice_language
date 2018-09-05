#include <stdio.h>

void add (int n1, int n2) {
	printf("%d", n1+n2);
}

void sub (int n1, int n2) {
	printf("%d", n1-n2);
}

int main() {
	int n1, n2, mod;
	scanf("%d %d", &n1, &n2);
	scanf("%d", &mod);
	void (*po)(int, int);
	
	if (mod == 0)
		po = *add;
	else
		po = *sub;
	po(n1, n2);
}

