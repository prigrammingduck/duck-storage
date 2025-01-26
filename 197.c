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
	printf("x,y좌표 반지름 입력:");
	scanf("%lf %lf %lf", &point[0].x, &point[0].y, &point[0].r);
	scanf("%lf %lf %lf", &point[1].x, &point[1].y, &point[1].r);
	xdis = point[0].x - point[1].x;
	ydis = point[0].y - point[1].y;
	pdistance = sqrt(xdis*xdis+ydis*ydis);
	if (pdistance > point[0].r + point[1].r) {
		printf("떨어져 있습니다.");
	}
	else if (pdistance == point[0].r + point[1].r) {
		printf("접합니다.");
	}
	else {
		point[0].r > point[1].r ? (largerR = point[0].r,smallR=point[1].r) : (largerR = point[1].r,smallR=point[0].r);
		if (largerR > pdistance + smallR) {
			printf("포함 관계입니다.");
		}
		else if(largerR == pdistance + smallR){
			printf("큰 원의 안쪽으로 접해 있습니다.");
		}
		else {
			printf("겹쳐 있습니다");
		}
	}
}