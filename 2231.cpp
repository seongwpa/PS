#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void div(int N) {
	int i;
	int tmp, sum, flag = 0;
	for (i = N - 54; i < N; i++) {
		sum = tmp = i;
		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == N) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%d", i);
	else 
		printf("0");
	return;
}

int main() {
	int N, cnt = 0;
	scanf("%d", &N);

	div(N);
	return 0;
}