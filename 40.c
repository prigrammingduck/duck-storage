#include<stdio.h>

int main() {
	int n=1,sum=0;
	while (sum < 1000) {
		sum += n;
		n++;
	}n--;
	if (sum > 1000) {
		sum -= n;
		n--;
	}
	printf("1부터%d까지의 합은 %d입니다.", n, sum);
}