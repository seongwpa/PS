#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[100001] = { 0, };
	int n, sum =0, sumcnt = -1000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sum = arr[0];
	sumcnt = arr[0];

	if (n == 2) {
		if (arr[0] < 0) {
			if (arr[0] > arr[1]) {
				printf("%d", arr[0]);
				return 0;
			}
			else if (arr[0]+ arr[1] < arr[1]) {
				printf("%d", arr[1]);
				return 0;
			}
		}
	}

	for (int i = 1; i < n; i++) {
		if (sum + arr[i] < 0) {
			sum = arr[i];
			if (sum > sumcnt)
				sumcnt = sum;
		}
		else {
			sum += arr[i];
			if (sum < arr[i])
				sum = arr[i];
			else
				if (sum > sumcnt)
					sumcnt = sum;
		}
	}

	printf("%d", sumcnt);
}