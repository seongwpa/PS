#include<stdio.h>
int sol[41][2] = { {1,0}, {0,1}, };
int main() {
	int T, i;
	int Tc[101];
	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d", &Tc[i]);
	}
	for (i = 2; i < 41; i++) {
		sol[i][0] = sol[i - 1][0] + sol[i - 2][0];
		sol[i][1] = sol[i - 1][1] + sol[i - 2][1];
	}
	for (i = 0; i < T; i++) {
		printf("%d %d\n", sol[Tc[i]][0], sol[Tc[i]][1]);
	}
	return 0;
}