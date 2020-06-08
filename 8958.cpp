#include <stdio.h>

int main() {
	int T,score = 0, flag = 1;
	int arr[101];
	char ox = 'a';
	scanf_s("%d", &T);
	getchar();
	for (int i = 0; i < T; i++) {
		while (ox != '\n') {
			scanf_s("%c", &ox);
			if (ox == 'O') {
				score += flag;
				flag++;
			}
			else flag = 1;
		}
		arr[i] = score;
		score = 0;
		flag = 1;
		ox = 'a';
	}
	for (int i = 0; i < T; i++)
		printf("%d\n", arr[i]);
	return 0;
}