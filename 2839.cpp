#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, i = 0, cnt = 0;
	scanf("%d", &N);
	if (N == 4 || N == 7) {
		printf("-1");
		return 0;
	}
	while ((N - (i * 3)) % 5 != 0) {
		i++;
	}
	cnt = (N - (i * 3)) / 5 + i;
	printf("%d", cnt);
	return 0;
}