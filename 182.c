#include<stdio.h>

void exchange(int* a, int* b) {
	int therm=*a;
	*a = *b;
	*b=therm;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("a=%d b=%d\n", a, b);
	exchange(&a, &b);
	printf("a=%d b=%d", a, b);
}