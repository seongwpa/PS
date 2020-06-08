#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char alpha[101];
	int length = 0, index = 0;
	scanf("%s", alpha);
	for (int i = 0; alpha[i]; i++)
		length++;
	while (alpha[index]) {
		if (alpha[index] == '=') {
			if (alpha[index - 1] == 'c' || alpha[index - 1] == 's') {
				length--;
			}
			else if (alpha[index - 1] == 'z') {
				length--;
				if (alpha[index - 2] == 'd') {
					length--;
				}
			}
		}
		else if (alpha[index] == '-') {
			if (alpha[index - 1] == 'c' || alpha[index - 1] == 'd') {
				length--;
			}
		}
		else if (alpha[index] == 'j') {
			if (alpha[index - 1] == 'l' || alpha[index - 1] == 'n') {
				length--;
			}
		}
		index++;
	}
	printf("%d", length);
	return 0;
}