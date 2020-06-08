#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[101] = { 0, };
int ans = 0;
int length = 0;
int flag;

int max(int *a) {
	int M = a[0];
	int cnt = 1;
	for (int i = 1; a[i]; i++) {
		if (a[i] > M) M = a[i];
		cnt++;
	}
	length = cnt;
	return M;
}

void cng(int *a){
	int cnt = 0;
	int temp[101];
	for (int i = 1; a[i]; i++) {
		temp[i - 1] = a[i];
		cnt++;
	}
	temp[cnt] = a[0];
	if (flag == 0)
		flag = length - 1;
	else flag -= 1;
	for (int i = 0; a[i]; i++)
		arr[i] = temp[i];
}

void pop(int *a) {
	int temp[101] = { 0, };
	for (int i = 1; a[i]; i++) {
		temp[i - 1] = a[i];
	}
	temp[length - 1] = 0;
	ans++;
	length--;
	flag--;
	for (int i = 0; a[i]; i++)
		arr[i] = temp[i];
}

int main() {
	int T;
	int N;
	int Mx;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &N, &flag);
		for (int j = 0; j < N; j++)
			scanf("%d", &arr[j]);
		while (1) {
			Mx = max(arr);
			if (arr[0] == Mx) {
				if (flag == 0) {
					pop(arr);
					break;
				}
				pop(arr);
			}
			else
				cng(arr);
		}
		printf("%d\n", ans);
		ans = 0;
		for (int i = 0; i < 101; i++)
			arr[i] = 0;
	}
}