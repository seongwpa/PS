#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//시간초과
long long arr[5000000];
long long ans[5000000] = { 0, };

void min(int i, int L) {
	int idx;
	ans[i] = 1000000000;

	if (i - L < 0)
		idx = 0;
	else idx = i - L+1;
	
	for (idx; idx <= i; idx++) {
		if (ans[i] > arr[idx])
			ans[i] = arr[idx];
	}
	return;
}


int main() {
	int N, L;
	scanf("%d %d", &N, &L);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++) {
		min(i, L);
		printf("%d ", ans[i]);
	}

	return 0;
}