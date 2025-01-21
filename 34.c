#include<stdio.h>


int main() {
	int n, sum=0;
	scanf("%d", &n);
	printf("�� �������� 김동현");
	for (int i = n; i > 0; i--){
		sum += i;
	}
	printf("�� �������� �� %d", sum);
}