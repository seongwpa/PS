#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char left[100001], right[100001];
int i = 0;
/*
int clear(int now, int flag, int k, int N) {
	if (now + k >= N || now + 1 >= N) {
		printf("1");
		return 1;
	}
	if (i > now || i >= N) {
		printf("0");
		return 0;
	}
	if (flag == 0) {
		if (right[now + k] == '1') {
			i++;
			return clear(now + k, 1, k, N);
		}
		if (left[now - 1] == '1') {
			i++;
			return clear(now - 1, 0, k, N);
		}
		if (left[now + 1] == '1') {
			i++;
			return clear(now + 1, 0, k, N);
		}
	}
	else {
		if (left[now + k] == '1') {
			i++;
			return clear(now + k, 0, k, N);
		}
		if (right[now - 1] == '1') {
			i++;
			return clear(now - 1, 1, k, N);
		}
		if (right[now + 1] == '1') {
			i++;
			return clear(now + 1, 1, k, N);
		}
	}
}
*/
int main() {
	int N, k, flag = 0;
	scanf("%d %d", &N, &k);
	scanf("%s", left);
	scanf("%s", right);
	
//	clear(0, 0, k, N);
	return 0;
}