#include<stdio.h>

int string_value(char* a, char* b) {
	int res=0,al=0,bl=0;
	while(a[al] != '\0') {
		al++;
	}
	while (b[bl] != '\0') {
		bl++;
	}
	if (bl < al) {//al�� ũ�� 1��ȯ���� ���� �����.
		return  1;
	}
	else if (bl == al) {
		return 0;
	}
	else {
		return -1;//��� ���� b�� a���� ��ϱ� -1�� ��µɵ�
	}

}
int main() {
	char* a = "compare", * b = "sentense";
	int result=0;
	result = string_value(a, b);
	printf("%d", result);
}