#include<stdio.h>
#include<string.h>

int main() {
	char input[100];
	char Alpha[26],alpha[26];
	int count[52]={0}, len;
	printf("�����Է�:");
	gets(input);
	for (int i = 0; i < 26; i++) {
		Alpha[i] = 65 + i;//�빮��
		alpha[i] = 97 + i; //�ҹ���
	}
	len = strlen(input);
	for (int j = 0; j < len; j++) {
		for (int k = 0; k < 26; k++) {
			if (alpha[k] == input[j]) {
				count[k]++;
			}
		}
		for (int o = 0; o < 26; o++) {
			if (Alpha[o] == input[j]) {
				count[o+26]++;
			}
		}
	}
	for (int i = 0; i < 52; i++) {
		if (i < 26) {
			if (count[i] != 0) {
				printf("%c:%d ", alpha[i], count[i]);
			}
		}
		else {
			if (count[i] != 0) {
				printf("%c:%d ", Alpha[i - 26], count[i]);

			}
		}
	}
}