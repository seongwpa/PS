#include<stdio.h>
int A[1000001], B[1000001];

int main() {
	int T;
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++)
		scanf_s("%d %d", &A[i], &B[i]);
	for (int i = 0; i < T; i++)
		printf("Case #%d: %d\n", i+1, A[i] + B[i]);
	return 0;
}