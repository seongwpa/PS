#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(char *a) {
	int alpha[26] = { 0, };
	for (int i = 0; a[i]; i++) {
		if (alpha[a[i] - 'a'] == 0)
			alpha[a[i] - 'a'] = 1;
		else if (a[i] != a[i - 1])
			return 0;
	}
	return 1;
}

int main() {
	int N, cnt = 0;
	char word[101];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", word);
		if (check(word)) cnt++;
	}
	printf("%d", cnt);
}