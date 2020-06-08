#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int tonum(char a) {
	if (a < 'P')
		return (a - 56) / 3;
	else if (a < 'T')
		return 8;
	else if (a < 'W')
		return 9;
	else if (a <= 'Z')
		return 10;
}

int main() {
	char dial[16];
	int sum = 0;
	scanf("%s", dial);
	for (int i = 0; dial[i]; i++) {
		sum += tonum(dial[i]);
	}
	printf("%d", sum);
	return 0;
}