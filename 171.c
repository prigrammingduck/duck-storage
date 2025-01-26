#include<stdio.h>

int main() {
	char* ptr = "program";
	for (int i = 0; i < 7;i++ ) {
		printf("%s", ptr+i);
		printf("\t%c\n", ptr[i]);
	}
}