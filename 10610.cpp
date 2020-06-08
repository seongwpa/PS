#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int cnt[10] = { 0, };

int main() {
	char N[1000000];
	int num, sum = 0, flag = 0;
	scanf("%s", &N);
	for (int i = 0; N[i]; i++) {
		if (N[i] == '0')
			flag++;
		num = N[i] - '0';
		cnt[num]++;
		sum += num;
	}
	if (flag == 0 || sum % 3 != 0) {
		printf("-1");
		return 0;
	}
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < cnt[i]; j++) {
			printf("%d", i);
		}
	}
	return 0;
}