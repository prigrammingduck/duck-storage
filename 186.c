#include<stdio.h>
#include<string.h>
struct person
{
	char name[100], pho[100],adr[100];
};
int main() {
	struct person Hong;
	struct person Choi;
	printf("\t�̸�\t��ȭ��ȣ\t�ּ�\n");
	strcpy(Hong.name, "ȫ�浿");
	strcpy(Hong.pho, "010-1234-5678");
	strcpy(Hong.adr, "����ü��ϱ�������");
	strcpy(Choi.name, "������");
	strcpy(Choi.pho, "010-2020-2020");
	strcpy(Choi.adr, "����� ������ ������");
	printf("\t%s\t%s\t%s\n", Hong.name, Hong.pho, Hong.adr);
	printf("\t%s\t%s\t%s\n", Choi.name, Choi.pho, Choi.adr);
}