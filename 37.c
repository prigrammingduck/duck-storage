#include<stdio.h>

int main() {
	int grade;
	char award[4][100] = { "������","��ǻ��","���","����" };

	printf("����� ���� ��ǰ�� ����մϴ�\n����� �Է��ϼ���! ���:");
	scanf("%d", &grade);
	printf("%d��", grade);
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
		printf("���� ");
	}
}