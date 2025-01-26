#include<stdio.h>
#include<string.h>

void string_copy(char* a, char* b) {
	b = a;
	printf("%s", b);
}

int main() {
	char* a="abcde", * b="a";
	string_copy(a, b);
	
}