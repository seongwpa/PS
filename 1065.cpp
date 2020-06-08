#include<stdio.h>

int hs(int n) {
	int res;
	if (n < 100)
		res = n;
	else {
		res = 99;
		for (int i = 100; i <= n; i++) {
			if ((i / 100 - (i / 10) % 10) == ((i / 10) % 10 - (i % 10)))
				res++;
		}
	}
	return res;
}

int main() {
	int N, res;
	scanf_s("%d", &N);

	printf("%d",hs(N));
	return 0;
}