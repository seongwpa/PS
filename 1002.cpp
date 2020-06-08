#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int T, x1, y1, r1, x2, y2, r2, big, small;
	float dist;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) printf("-1\n");
			else printf("0\n");
		}
		else {
			dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
			if (r1 > r2) {
				big = r1;
				small = r2;
			}
			else {
				big = r2;
				small = r1;
			}
			if (big > dist) {
				if (dist + small < big) printf("0\n");
				else if (dist + small == big) printf("1\n");
				else printf("2\n");
			}
			else {
				if (dist > r1 + r2) printf("0\n");
				else if (dist == r1 + r2) printf("1\n");
				else printf("2\n");
			}
		}
	}
	return 0;
}