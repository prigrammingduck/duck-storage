#include<stdio.h>
#include<string.h>
typedef struct student_info {
	char st_no[10], name[8], pho[12];
	int credit;
}stu_info;
int main() {
	stu_info sinfo[5];
	char info_n[5][10] = { "00CS01234","00CS01236","00CS01238","00CS01239","00CS01240" }
	, info_na[5][8] = { "������","���ñ�","�ѱ���","������","������" }, info_p[5][12] = { "01012345678","01043215678","01013248765","01013245733","01043569827" };
	int c[5] = { 80,76,85,67,71 };

	for (int i = 0; i < 5; i++) {
		strcpy(sinfo[i].st_no, info_n[i]);
		strcpy(sinfo[i].name, info_na[i]);
		strcpy(sinfo[i].pho, info_p[i]);
		sinfo[i].credit=c[i];
	}
	printf("�й�\t\t�̸�\t��ȣ\t\t����\n");
	for (int j = 0; j < 5; j++) {
		printf("%s\t%s\t%s\t%d\n", sinfo[j].st_no, sinfo[j].name, sinfo[j].pho, sinfo[j].credit);

	}
}