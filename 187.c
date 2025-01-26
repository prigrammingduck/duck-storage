#include<stdio.h>
struct StuNG {
	char name[100];
	int grade;
};
double grade(struct StuNG student[], int n) {
	int sum=0;
	double result;
	for (int i = 0; i < n; i++) {
		sum += student[i].grade;
	}
	result = sum / n;
	return result;
};
int main() {
	int n,k;
	struct StuNG student[5];
	for (n = 0; n < 5; n++) {
		student[n].
	}
}