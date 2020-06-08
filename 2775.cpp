#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int arr[15][15];

int find(int a, int b) {
	if (b == 0)
		return 0;
	else if (arr[a][b] != 0) {
		return arr[a][b];
	}
	else {
		return find(a - 1, b) + find(a, b - 1);
	}
}

int main() {
	int T, a, b;

	arr[0][0] = 0;
	for (int i = 1; i < 15; i++) {
		arr[0][i] = i;
		arr[i][0] = 0;
	}

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", find(a, b));
	}
	return 0;
}