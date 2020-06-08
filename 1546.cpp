#include<stdio.h>

int main() {
	int N;
	float a[100] = { 0, };
	float sum = 0, max = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%f", &a[i]);
		if (a[i] > max) max = a[i];
	}
	for (int i = 0; i < N; i++) {
		sum += a[i] / max * 100;
	}
	printf("%f", sum / N);
	return 0;
}