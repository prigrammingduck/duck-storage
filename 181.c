#include<stdio.h>

int string_value(char* a, char* b) {
	int res=0,al=0,bl=0;
	while(a[al] != '\0') {
		al++;
	}
	while (b[bl] != '\0') {
		bl++;
	}
	if (bl < al) {//al이 크면 1반환으로 기준 잡겠음.
		return  1;
	}
	else if (bl == al) {
		return 0;
	}
	else {
		return -1;//결과 예측 b가 a보다 기니까 -1이 출력될듯
	}

}
int main() {
	char* a = "compare", * b = "sentense";
	int result=0;
	result = string_value(a, b);
	printf("%d", result);
}