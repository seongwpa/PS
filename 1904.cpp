#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a[1000001] = { 1, 1, 0, };

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 2; i <= N; i++) {
		a[i] = (a[i - 1] + a[i - 2]) % 15746;
	}
	printf("%d", a[N]);
}