#include<stdio.h>
int main() {
	int N, a, max = -1000000, min = 1000000;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &a);
		if (a > max) max = a;
		if (a < min) min = a;
	}
	printf("%d %d", min, max);
	return 0;
}