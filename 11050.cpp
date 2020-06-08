#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int		fac(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * fac(n - 1));
}
int		main(void)
{
	int N, K;
	float ans = 1;

	scanf("%d %d", &N, &K);
	printf("%d", fac(N) / (fac(K) *fac(N - K)));
}