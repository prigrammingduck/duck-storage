#include<stdio.h>
#include<string.h>

int main() {
	char y[4] = "Yes", n[3] = "No", m[30] = "Maybe, Rephrase the question",input[100];
	int* ye, * no, * ma;
	int index=0, length=0;
	ye = &y;
	no = &n;
	ma = &m;
	gets(input);
	length=strlen(input);
	index = length % 3;
	switch (index) {
	case 0:
		printf("%s", ye); break;
	case 1:
		printf("%s", no); break;
	case 2:
		printf("%s", ma); break;
	}

}