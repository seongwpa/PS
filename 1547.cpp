#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int M, X, Y, flag = 1;
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &X, &Y);
		if (X == flag)
			flag = Y;
		else if (Y == flag)
			flag = X;
	}
	printf("%d", flag);
}