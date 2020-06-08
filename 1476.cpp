#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int E, S, M, Y, i = 0;
	scanf("%d %d %d", &E, &S, &M);
	while (1) {
		Y = 28 * i + S;
		if ((Y - E)% 15 == 0 && (Y - M) % 19 == 0)
			break;
		i++;
	}
	printf("%d", Y);
}