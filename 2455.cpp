#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ans[4] = { 0, };

int main() {
	int U, D, flag, max = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &D, &U);
		if (i > 0) ans[i] = ans[i - 1];
		ans[i] = ans[i] - D + U;
		if (ans[i] > max) max = ans[i];
	}
	printf("%d", max);
}