#include <stdio.h>
int A[100], B[100];

int main() {
	int T;
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++)
		scanf_s("%d %d", &A[i], &B[i]);
	for (int i = 0; i < T; i++)
		printf("%d\n", A[i] + B[i]);
	return 0;
}