#include<stdio.h>

int main() {
	int a, b, c;
	int big=0;
	printf("���� 3�� �Է�:");
	scanf("%d %d%d", &a, &b, &c);
	a > b ? (a>c?(big=a):(big=c)) : (b>c?(big=b):(big=c));
	printf("%d", big);
}