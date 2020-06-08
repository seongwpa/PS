#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int alpha[27] = { 0, };
	char S[101];

	for (int i = 0; i < 27; i++)
		alpha[i] = -1;

	scanf("%s", S);

	for (int i = 0; S[i]; i++)
		if (alpha[(int)S[i] - 'a'] == -1)
			alpha[(int)S[i] - 'a'] = i;
	
	for (int i = 0; i < 26; i++)
		printf("%d ", alpha[i]);
	return 0;
}