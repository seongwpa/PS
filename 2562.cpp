#include<stdio.h>

int main() {
	int N, max = 0, maxi;
	for (int i = 1; i <= 9; i++) {
		scanf_s("%d", &N);
		if (N > max) {
			max = N;
			maxi = i;
		}
	}
	printf("%d\n%d", max, maxi);
	return 0;
}