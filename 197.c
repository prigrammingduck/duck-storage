#include<stdio.h>
#include<math.h>

typedef struct point {
	double x;
	double y;
	double r;
}rpoint;
int main() {
	double pdistance,xdis,ydis,largerR=0,smallR=0;
	rpoint point[2];
	printf("x,y��ǥ ������ �Է�:");
	scanf("%lf %lf %lf", &point[0].x, &point[0].y, &point[0].r);
	scanf("%lf %lf %lf", &point[1].x, &point[1].y, &point[1].r);
	xdis = point[0].x - point[1].x;
	ydis = point[0].y - point[1].y;
	pdistance = sqrt(xdis*xdis+ydis*ydis);
	if (pdistance > point[0].r + point[1].r) {
		printf("������ �ֽ��ϴ�.");
	}
	else if (pdistance == point[0].r + point[1].r) {
		printf("���մϴ�.");
	}
	else {
		point[0].r > point[1].r ? (largerR = point[0].r,smallR=point[1].r) : (largerR = point[1].r,smallR=point[0].r);
		if (largerR > pdistance + smallR) {
			printf("���� �����Դϴ�.");
		}
		else if(largerR == pdistance + smallR){
			printf("ū ���� �������� ���� �ֽ��ϴ�.");
		}
		else {
			printf("���� �ֽ��ϴ�");
		}
	}
}