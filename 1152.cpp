#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char st[1000001] = { NULL };
	scanf("%[^\n]s", st);
	int cnt = 1, length = 0;
	
	for (int i = 0; st[i]; i++) {
		length++;
	}
	if (length == 0) {
		printf("0");
		return 0;
	}

	if (length == 1) {
		if ((st[0] == ' ') || (st[0] == '\n')) {
			printf("0");
			return 0;
		}
	}

	st[length - 1] = '\n';

	for (int i = 1; st[i]; i++) {
		if (st[i] == ' ') {
			if ((st[i - 1] != ' ') && (st[i + 1] != ' '))
				cnt++;
		}
	}
	if (length == 1 && st[0] == ' ')
		cnt = 0;

	printf("%d\n", cnt);
	return 0;
}