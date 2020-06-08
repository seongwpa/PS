#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//////미해결
/*
예제는 다 됨.
예외처리해야하는것
6
1 2 3 4 6 5

6
-6 -5 -4 -3 -2 -1

*/

int arr[251] = { 0, };
int x[10000000] = { 0, };
int y[10000000] = { 0, };

int check() {
	for (int i = 0; arr[i]; i++)
		if (arr[i] != i + 1) {
			return i;
		}
	return -1;
}

void change(int l, int r) {
	int tmp;
	if ((r - l) % 2 == 0)
		arr[(r + l) / 2] *= -1;
	while (r > l) {
		tmp = -1 * arr[r];
		arr[r] = -1 * arr[l];
		arr[l] = tmp;
		r--;
		l++;
	}
}

int main() {
	int N, K = 0, num = 250, chk;
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	while (1) {
		chk = check();
		if (chk == -1) break;
		for (int i = chk + 1; arr[i]; i++) {
			if (arr[i - 1] != arr[i] - 1 && x[K] == 0) {
				x[K] = i + 1;
				num = arr[i - 1];
			}
			if (arr[i] == -1 * (num + 1))
				y[K] = i + 1;
		}
		if (y[K] == 0 && x[K] != 0) {
			y[K] = x[K] - 1;
			x[K] = chk + 1;
		}
		change(x[K] - 1, y[K] - 1);
		K++;
	}
	printf("%d\n", K);
	for (int i = K - 1; i >= 0; i--) {
		printf("%d %d\n", x[i], y[i]);
	}

	return 0;
}