#include<stdio.h>

int main(void) {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%.9f", (double)a / (double)b);
	return 0;
}