#include<stdio.h>
int main()
{
	printf("�⺻ �ڷ����� ũ�� �˾ƺ���!!\n");
	int in, ch, fl, dou, lo,lolo,sh,lodo;
	in = sizeof(int);
	fl = sizeof(float);
	dou = sizeof(double);
	lo = sizeof(long);
	ch = sizeof(char);
	lolo = sizeof(long long);
	lodo = sizeof(long double);
	sh = sizeof(short);
	printf("int=%d\nfloat=%d\ndouble=%d\nlong=%d\nchar=%d\nlong long=%d\nlong double=%d\nshort=%d\n", in, fl, dou, lo, ch,lolo,lodo,sh);

}