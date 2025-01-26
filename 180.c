#include<stdio.h>
char* string_connect(char a[], char b[]) {

	int i = 0,k=0;
	while (a[i] != '\0') {
		 i++;
	}
	do {
		a[i] = b[k]; i++; k++;
	} while (b[k] != '\0');
	return a;
}
int main() {
	char a[100]="linked", b[100]="sentense";
	char* c = "";
	c=string_connect(a, b);
	printf("%s", c);
}