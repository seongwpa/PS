#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char S[1000001];
	char ans;
	int alpha[26] = { 0, };
	int max = 0, cnt = 0;

	scanf("%s", S);
	for (int i = 0; S[i]; i++) {
		if (S[i] > 90)
			S[i] = S[i] - 32;
		alpha[S[i] - 'A'] += 1;
	}
	for (int i = 0; i < 26; i++) {
		if (alpha[i] > max) max = alpha[i];
	}
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == max) {
			ans = i + 65;
			cnt += 1;
		}
	}
	if (cnt == 1)
		printf("%c", ans);
	else
		printf("?");
}