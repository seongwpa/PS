#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int check(int num) {
	if (num == 1) return 0;
	else {
		for (int i = 2; i <= sqrt(num); i++) {
			if (num % i == 0)
				return 0;
		}
		return 1;
	}
}

int main() {
	int N, a, cnt = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		if (check(a)) cnt++;
	}
	printf("%d", cnt);
}