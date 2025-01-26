#include<stdio.h>

typedef struct rect {
	int x1, y1;
	int x2, y2;
}RECT;
int GetArea(RECT a) {
	int xl, yl,size;
	xl = a.x1 - a.x2;
	yl = a.y1 - a.y2;
	size = xl * yl;
	if (size < 0) {
		size *= -1;
	}return size;
}
int main() {
	RECT point;
	int result;
	printf("좌표를 2개 입력 x,y순으로:");
	scanf("%d %d %d %d", &point.x1, &point.y1, &point.x2, &point.y2);
	result = GetArea(point);
	printf("%d", result);
}