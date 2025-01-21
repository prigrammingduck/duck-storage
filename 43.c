#include<stdio.h>

int main() {
	int a, b, c;
	int big=0;
	printf("정수 3개 입력:");
	scanf("%d %d%d", &a, &b, &c);
	a > b ? (a>c?(big=a):(big=c)) : (b>c?(big=b):(big=c));
	printf("%d", big);
}