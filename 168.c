#include<stdio.h>

int sum(int* A, int n) {
	int i = 0,sum=0;
	while (i < n) {
		sum += A[i];
		i++;
	}
	return sum;
}
int main() {
	int num[10] = { 1,2,5,3,4,3,2,3,2,23 };
	printf("รัวี:%d",sum(num,10) );
}