#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long	ndp[100] = { 0, 1, };

long long	fib(int n)
{
	if (n == 0)
		return (0);
	else if (ndp[n] != 0)
		return (ndp[n]);
	else
	{
		ndp[n] = fib(n - 2) + fib(n - 1);
		return (ndp[n]);
	}
}

int		main()
{
	int n;
	scanf("%d", &n);
	printf("%lld\n", fib(n));
}