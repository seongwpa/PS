#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int T, x, y, dist;
	int up, flag;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		up = 2;
		flag = 1;
		scanf("%d %d", &x, &y);
		if (y - x <= 3) printf("%d\n", y - x);
		else {
			dist = y - x - 1;
			while (dist > 1) {
				dist -= up;
				flag++;
				if (flag % 2 == 1) {
					up++;
				}
			}
			printf("%d\n", flag + 1);
		}
	}
}