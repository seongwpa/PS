#include<stdio.h>
int arr[301];
int score[301];

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int Num_arr, i;
	scanf_s("%d", &Num_arr);
	for (i = 0; i < Num_arr; i++) {
		scanf_s("%d", &arr[i]);
	}
	score[0] = arr[0];
	score[1] = arr[0] + arr[1];
	score[2] = max(arr[0] + arr[2], arr[1] + arr[2]);

	for (i = 3; i < Num_arr; i++) {
		score[i] = max(arr[i] + arr[i - 1] + score[i - 3], arr[i] + score[i - 2]);
	}
	printf("%d", score[Num_arr - 1]);
	return 0;
}