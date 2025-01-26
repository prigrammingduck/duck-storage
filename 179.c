#include<stdio.h>

char* string_copy(char* a) {
	return a;
}
int main() {
	char* a = "copied", * b = "";
	b=string_copy(a);
	printf("%s", b);

}