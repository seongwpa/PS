#include<stdio.h>
int sol[11] = { 0, 1, 2, 4, };
int main() {
	int T;
	int Tc[100];
	for (int k = 4; k < 11; k++) {
		sol[k] = sol[k - 1] + sol[k - 2] + sol[k - 3];
	}
	scanf_s("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf_s("%d", &Tc[i]);
	}
	for (int j = 0; j < T; j++) {
		printf("%d\n", sol[Tc[j]]);
	}
	return 0;
}