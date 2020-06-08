#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int check(int num) {
	if (num == 1) return 0;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int M, N, sum = 0, min;
	scanf("%d", &M);
	scanf("%d", &N);
	for (int i = N; i >= M; i--) {
		if (check(i)) {
			sum += i;
			min = i;
		}
	}
	if(sum != 0) printf("%d\n%d", sum, min);
	else printf("-1");
}