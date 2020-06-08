#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a[1000] = { 0, };

void check(int n) {
	int tmp, flag = 0;

	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			tmp = a[i];
			a[i] = a[i - 1];
			a[i - 1] = tmp;
		}
	}
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1])
			flag = 1;
	}
	if (flag == 1) {
		check(n - 1);
		return;
	}
	else
		return;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	check(N);
	for (int i = 0; i < N; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}