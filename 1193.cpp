#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int X, i = 0;
	scanf("%d", &X);
	while (X > 0) {
		i++;
		X -= i;
	}
	X += i;
	if (i % 2 == 1) printf("%d/%d", i - X + 1, X);
	else printf("%d/%d", X, i - X + 1);
	return 0;
}