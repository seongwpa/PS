#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int ss[1000001] = { 0, };

int check(int num) {
	if (num == 1) return 0;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int M, N, idx = 0;
	scanf("%d %d", &M, &N);
	for (int i = M; i <= N; i++) {
		if (check(i)) {
			ss[idx] = i;
			idx++;
		}
	}
	for (int i = 0; ss[i]; i++)
		printf("%d\n", ss[i]);
	return 0;
}