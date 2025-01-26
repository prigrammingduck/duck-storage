#include<stdio.h>
#include<stdlib.h>

int main() {
	int n,big;
	scanf("%d",&n);
	int* ptr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", ptr + i);
	}
	big = ptr[0];
	for (int i = 0; i < n; i++) {
		if (ptr[i] > big) {
			big = ptr[i];
		}
	}printf("%d", big);
	free(ptr);
}