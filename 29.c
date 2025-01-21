#include<stdio.h>
#include<string.h>


int main() {
	char str[100];
	char str1[10][100];
	char* token;
	int i=0;
	gets(str);
	token = strtok(str, " ");
	while (token != NULL) {
		strcpy(str1[i], token);
		token = strtok(NULL, " ");
		i++;
	}
	for (int k = i-1; k>=0;k-- ) {
		printf("%s ", str1[k]);
	}
	}