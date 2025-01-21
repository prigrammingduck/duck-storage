#include<stdio.h>

int main() {
	int k[3] = { 10,20,30 },a;
	int* p;
	p = k;
	a = *++p;
	
	printf("%d",a);
	
}