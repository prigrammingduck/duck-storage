#include<stdio.h>
#include<string.h>

int main() {
	int len;
	char stmt[80];
	char* ps, *pe;
	gets(stmt);
	len=strlen(stmt);
	ps = stmt;
	pe = stmt + len-1;
	for (int i = 0; i < len; i++) {
		if (ps[i] == pe[-i]) {
			if ((i + 1) == len) {
				printf("ȸ���Դϴ�");
			}
			continue;
		}
		else {
			printf("ȸ���� �ƴմϴ�."); break;
		}
	
	
	}
	return 0;
}