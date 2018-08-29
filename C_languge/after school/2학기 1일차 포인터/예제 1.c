#include <stdio.h>

int main() {
	int arr[2][3]={10, 20, 30, 40, 50, 60};
	printf("%d\n", arr);
	printf("%d %d %d\n", arr+1, arr[0]+1, arr[1]+1);
	printf("%d %d %d\n", arr+1, arr[0]+2, arr[1]+2);
	printf("%d %d %d\n", arr+1, arr[0]+3, arr[1]+3);
} 
