#include<stdio.h>
#include<string.h>
struct person
{
	char name[100], pho[100],adr[100];
};
int main() {
	struct person Hong;
	struct person Choi;
	printf("\t이름\t전화번호\t주소\n");
	strcpy(Hong.name, "홍길동");
	strcpy(Hong.pho, "010-1234-5678");
	strcpy(Hong.adr, "서울시성북구길음동");
	strcpy(Choi.name, "최재준");
	strcpy(Choi.pho, "010-2020-2020");
	strcpy(Choi.adr, "서울시 공덕구 공덕동");
	printf("\t%s\t%s\t%s\n", Hong.name, Hong.pho, Hong.adr);
	printf("\t%s\t%s\t%s\n", Choi.name, Choi.pho, Choi.adr);
}