#define _CRT_SECURE_NO_WARNINGS
// Æ²·È´ä´Ï´Ù.
#include<stdio.h>

int a[1000000] = { 0, };
int cnt[2000001] = { 0, };
int ans[1000000] = { 0, };

int main() {
	int N, min = 1000000, max = -1000000;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		cnt[a[i]+1000000]++;
		if (min > a[i]) min = a[i] + 1000000;
		if (max < a[i]) max = a[i] + 1000000;
	}
	for (int i = min; i <= max; i++) {
		cnt[i] += cnt[i - 1];
	}
	for (int i = N - 1; i >= 0; i--) {
		ans[--cnt[a[i]+1000000]] = a[i];
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", ans[i]);
	}
	return 0;
}