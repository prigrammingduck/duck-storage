#include<stdio.h>

int main() {
	int grade;
	char award[4][100] = { "프린터","컴퓨터","상금","상패" };

	printf("등수에 따른 상품을 출력합니다\n등수를 입력하세요! 등수:");
	scanf("%d", &grade);
	printf("%d등", grade);
	switch (grade)
	{
	case 1:
		printf("%s ",award[grade-1]);
		grade += 1;
	case 2:
		printf("%s ", award[grade-1]);
		grade += 1;
	case 3:
		printf("%s ", award[grade-1]);
		grade += 1;
	case 4:
		printf("%s ", award[grade - 1]); break;
	default:
		printf("없음 ");
	}
}