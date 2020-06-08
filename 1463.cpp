#include <stdio.h>

int N;
int sol[1000001];

int main(void) {

	scanf_s("%d", &N);

	for (int i = 2; i <= N; i++) {
			sol[i] = sol[i - 1] + 1;
			if (i % 3 == 0)
			{
				if (sol[i] > sol[i / 3] + 1)
					sol[i] = sol[i / 3] + 1;
			}
			if (i % 2 == 0)
			{
				if (sol[i] > sol[i / 2] + 1)
					sol[i] = sol[i / 2] + 1;
			}
		}
	printf("%d", sol[N]);
	return 0;
}