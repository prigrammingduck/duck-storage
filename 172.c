#include<stdio.h>

void sectotime(int* seco) {
	int  min, hour, csec;
	hour = *seco / 60 /60;
	min = *seco / 60 % 60;
	csec = *seco % 60;
	printf("%d�� %d�� %d��", hour, min, csec);
}
int main() {
	int  insec;
	int* sec;
	printf("�ʸ� �Է�:");
	scanf("%d", &insec);
	sec = &insec;
	sectotime(sec);

}