#include <stdio.h>

void p1win () {
	printf("Person1_win!");
}

void p2win() {
	printf("Person2_win!");
}

void draw() {
	printf("Draw!");
}

int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	void (*po)();
	if (n1 == n2) {
		po = draw;
		po();
	}
	else if (n1 > n2 || n1==2 && n2!=1) {
		po = p1win;
		po();
	}
	else if (n1 < n2 || n1==2 && n2==1) {
		po = p2win;
		po();
	}
}
