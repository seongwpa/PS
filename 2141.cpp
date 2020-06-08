#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ans[100001] = { 0, };

int main(void) {
	int N, min = 1000000000, flag;
	int X[100001], A[100001];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &X[i], &A[i]);
	}

	for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j >= 0; j--) {
			if (X[i] > X[j]) ans[i] += (X[i] - X[j]) * A[j];
			else ans[i] += (X[j] - X[i]) * A[j];
		}
		if (ans[i] <= min) {
			min = ans[i];
			flag = X[i];
		}
	}
	printf("%d", flag);

	return 0;
}
// 시간초과