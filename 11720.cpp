#include<stdio.h>

int main() {
	int N, sum = 0;
	char num;
	scanf_s("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) {
		scanf_s("%c", &num);
		sum += num-'0';
	}
	printf("%d", sum);
	return 0;
}