#include<stdio.h>

typedef struct numulti {
	int a[3];

}nummul;
int main() {
	nummul threenum;
	scanf("%d", threenum.a);
	threenum.a[1] = threenum.a[0] * threenum.a[0];
	threenum.a[2] = threenum.a[0] * threenum.a[0] * threenum.a[0];
	printf("a[0]:%d a[1]:%d a[2]:%d", threenum.a[0], threenum.a[1], threenum.a[2]);
}