#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2, ans1, ans2;
	scanf("%d %d", &n1, &n2);
	ans1 = (n1 % 10) * 100 + ((n1 / 10) % 10) * 10 + n1 / 100;
	ans2 = (n2 % 10) * 100 + ((n2 / 10) % 10) * 10 + n2 / 100;
	if (ans1 > ans2)
		printf("%d", ans1);
	else printf("%d", ans2);
	return 0;
}