#include<stdio.h>
#include<stdlib.h>
int main() {
	int beach[15]={0}, select=0,signal=1;
	while (1) {
		printf("도서관 좌석 배치 프로그램입니다.\n빈자리입니다\n");
		for (int j = 0; j < 15; j++) {
			if (beach[j] == 1) {
				printf("    ");
				if ((j + 1) % 5 == 0) {
					printf("\n");
				}
			}
			else {
				printf("%4d", j+1);
				if ((j + 1) % 5 == 0) {
					printf("\n");
				}
			}
			if (beach[j] == 0) {
				signal = 1;
			}
			else {
				signal = 0;
			}
		}
		printf("좌석 번호를 선택하세요");
		scanf("%d", &select);
		if (signal == 0) {
			printf("빈자리가 없습니다 종료합니다!!"); break;
		}
		if (beach[select-1] == 1) {
			printf("이미 선택된 좌석입니다.\n"); continue;
		}
		beach[select-1] = 1;
	
	}
	return 0;
}		

