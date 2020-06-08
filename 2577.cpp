#include<stdio.h>

int main() {
	int a, b, c, n;
	int sol[10] = { 0, };
	scanf_s("%d %d %d", &a, &b, &c);
	n = a * b * c;
	while (n != 0) {
		int d = n % 10;
		sol[d]++;
		n /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", sol[i]);
	return 0;
}