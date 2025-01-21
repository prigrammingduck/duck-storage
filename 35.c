#include<stdio.h>

int main() {
	int n;
	printf("양의정수 n:");
	scanf("%d", &n);

	if (n % 2 == 0) {
		n -= 1;
	}
	for (n; n >= 1; n -= 2) {
		printf("%d", n);
	}
}