#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, w, h, minx, miny;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	if (x < w - x) minx = x;
	else minx = w - x;
	if (y < h - y) miny = y;
	else miny = h - y;
	if (minx < miny) printf("%d", minx);
	else printf("%d", miny);
	return 0;
}