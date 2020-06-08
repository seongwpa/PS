#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long	fib[68] = { 1, 1, 2, 4, };

long long	koong(int n)
{
	if (fib[n] != 0)
		return (fib[n]);
	else {
		fib[n] = koong(n - 1) + koong(n - 2) + koong(n - 3) + koong(n - 4);
		return (fib[n]);
	}
}

int		main()
{
	int N, K;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%d", &K);
		printf("%lld\n", koong(K));
	}
}