#include<stdio.h>
#include<stdlib.h>
int main() {
	int beach[15]={0}, select=0,signal=1;
	while (1) {
		printf("������ �¼� ��ġ ���α׷��Դϴ�.\n���ڸ��Դϴ�\n");
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
		printf("�¼� ��ȣ�� �����ϼ���");
		scanf("%d", &select);
		if (signal == 0) {
			printf("���ڸ��� �����ϴ� �����մϴ�!!"); break;
		}
		if (beach[select-1] == 1) {
			printf("�̹� ���õ� �¼��Դϴ�.\n"); continue;
		}
		beach[select-1] = 1;
	
	}
	return 0;
}		

