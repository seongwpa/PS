#include<stdio.h>
int A[10001];
int main() {
	int N, X;
	scanf_s("%d %d", &N, &X);
	for (int i = 0; i < N; i++)
		scanf_s("%d", &A[i]);
	for (int i = 0; i < N; i++)
		if (A[i] < X)
			printf("%d ", A[i]);
	return 0;
}