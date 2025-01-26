#include<stdio.h>

void sectotime(int* seco) {
	int  min, hour, csec;
	hour = *seco / 60 /60;
	min = *seco / 60 % 60;
	csec = *seco % 60;
	printf("%d시 %d분 %d초", hour, min, csec);
}
int main() {
	int  insec;
	int* sec;
	printf("초를 입력:");
	scanf("%d", &insec);
	sec = &insec;
	sectotime(sec);

}