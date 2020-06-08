#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int sdk[9][9];
int row[9][10] = { 0, };
int col[9][10] = { 0, };
int sqr[9][10] = { 0, };

void print() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d", sdk[i][j]);
		}
		printf("\n");
	}
}

int sqrnum(int x, int y) {
	return (y / 3) * 3 + (x / 3);
}

void check(int idx) {

	if (idx == 81) {
		print();
		exit(0);
	}

	int x = idx % 9;
	int y = idx / 9;

	if (sdk[y][x] != 0)
		check(idx + 1);
	else {
		for (int i = 1; i <= 9; i++) {
			if (row[y][i] != 1 && col[x][i] != 1 && sqr[sqrnum(y, x)][i] != 1) {
				sdk[y][x] = i;
				row[y][i] = 1;
				col[x][i] = 1;
				sqr[sqrnum(y, x)][i] = 1;
				check(idx + 1);
				sdk[y][x] = 0;
				row[y][i] = 0;
				col[x][i] = 0;
				sqr[sqrnum(y, x)][i] = 0;
			}
		}
	}
}

int main() {
	int n;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		for (int j = 0; j < 9; j++) {
			sdk[i][8 - j] = n % 10;
			n /= 10;
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sdk[i][j] != 0) {
				row[i][sdk[i][j]] = 1;
				col[j][sdk[i][j]] = 1;
				sqr[sqrnum(i, j)][sdk[i][j]] = 1;
			}
		}
	}
	check(0);
	printf("\n");
}