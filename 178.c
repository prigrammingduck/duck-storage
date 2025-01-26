#include<stdio.h>
#include<string.h>
void string_connect(char* a,char*b,char* c) {
	char ai[100], bi[100], ci[100];

	int i = 0,k=0;
	while (a[i] != NULL) {
		ci[i] = a[i]; i++;
	}
	while (b[k] != NULL) {
		ci[i] = b[k];	k++; i++;
	}
	ci[i] = '\0';
	printf("%s ", ci);
	c = ci;
	printf("%s", c);
	
}
int main() {
	char* a = "Hansung", * b = "Unuversity",*c="";
	string_connect(a, b, c);

}