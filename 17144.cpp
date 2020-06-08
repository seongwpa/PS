#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int arr[50][50] = { 0, };
int temp[50][50] = { 0, };
int sum;

int chk(int R, int C, int i, int j, int set) {
	if (j == 0) {						//(x, 0)
		if (i == 0) {					//(0, 0)
			if (i == set - 2) {			//공기청정기 위
				sum = arr[i][j + 1] / 5;
				return 1;
			}
			else {						//0,0
				sum = arr[i][j + 1] / 5 + arr[i + 1][j] / 5;
				return 2;
			}
		}
		else if(i == R - 1){			//(R-1,0)
			if (i == set + 1) {			//공기청정기 아래
				sum = arr[i][j + 1] / 5;
				return 1;
			}
			else {						//(R-1,0)
				sum = arr[i][j + 1] / 5 + arr[i - 1][j] / 5;
				return 2;
			}
		}
		else if (i == set - 2) {
			sum = arr[i][j + 1] / 5 + arr[i - 1][j] / 5;
			return 2;
		}
		else if (i == set + 1) {
			sum = arr[i][j + 1] / 5 + arr[i + 1][j] / 5;
			return 2;
		}
		else {
			sum = arr[i][j + 1] / 5 + arr[i + 1][j] / 5 + arr[i - 1][j] / 5;
			return 3;
		}
	}
	else if (j == C - 1) {
		if (i == 0) {
			sum = arr[i][j - 1] / 5 + arr[i + 1][j] / 5;
			return 2;
		}
		else if (i == R - 1) {
			sum = arr[i][j - 1] / 5 + arr[i - 1][j] / 5;
			return 2;
		}
		else {
			sum = arr[i][j - 1] / 5 + arr[i + 1][j] / 5 + arr[i - 1][j] / 5;
			return 3;
		}
	}
	else if (i == 0) {
		sum = arr[i][j + 1] / 5 + arr[i][j - 1] / 5 + arr[i + 1][j] / 5;
		return 3;
	}
	else if (i == R - 1) {
		sum = arr[i][j + 1] / 5 + arr[i][j - 1] / 5 + arr[i - 1][j] / 5;
		return 3;
	}
	else if (j == 1 && (i == set - 1 || i == set)) {
		sum = arr[i][j + 1] / 5 + arr[i - 1][j] / 5 + arr[i + 1][j] / 5;
		return 3;
	}
	else {
		sum = arr[i][j + 1] / 5 + arr[i][j - 1] / 5 + arr[i + 1][j] / 5 + arr[i - 1][j] / 5;
		return 4;
	}
}

void diffusion(int R, int C, int set) {
	int num;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (arr[i][j] == -1) {
				temp[i][j] = -1;
				continue;
			}
			num = chk(R, C, i, j, set);
			temp[i][j] = arr[i][j] - (arr[i][j] / 5)*num + sum;
		}
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			arr[i][j] = temp[i][j];
		}
	}
}

void clean(int R, int C, int set) {
	for (int i = set - 2; i > 0; i--) {
		temp[i][0] = arr[i - 1][0];
	}
	for (int i = 0; i < C - 1; i++) {
		temp[0][i] = arr[0][i + 1];
	}
	for (int i = 0; i < set - 1; i++) {
		temp[i][C - 1] = arr[i + 1][C - 1];
	}
	for (int i = C - 1; i > 1; i--) {
		temp[set - 1][i] = arr[set - 1][i - 1];
	}
	temp[set - 1][1] = 0;

	for (int i = set + 1; i < R - 1; i++) {
		temp[i][0] = arr[i + 1][0];
	}
	for (int i = 0; i < C - 1; i++) {
		temp[R - 1][i] = arr[R - 1][i + 1];
	}
	for (int i = R - 1; i > set; i--) {
		temp[i][C - 1] = arr[i - 1][C - 1];
	}
	for (int i = C - 1; i > 1; i--) {
		temp[set][i] = arr[set][i - 1];
	}
	temp[set][1] = 0;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			arr[i][j] = temp[i][j];
		}
	}
}

int main() {
	int R, C, T;
	int set, ans = 0;
	scanf("%d %d %d", &R, &C, &T);
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == -1) {
				set = i;
			}
		}
	}
	for (int i = 0; i < T; i++) {
		diffusion(R, C, set);
		clean(R, C, set);
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (arr[i][j] == -1) continue;
			ans += arr[i][j];
		}
	}
	printf("%d", ans);
	
	return 0;
}