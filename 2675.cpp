#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print(char a[], int b) {
	for (int i = 0; a[i]; i++) 
		for (int j = 0; j < b; j++)
			printf("%c", a[i]);
	printf("\n");
}

int main() {
	int T, R;
	char S[21];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &R);
		scanf("%s", S);
		print(S, R);
	}
	return 0;
}