#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long	tile[1001] = { 0, 1, 3, 5, 11, 21, };

long long	tiling(int t)
{
	if (tile[t] != 0)
		return (tile[t]);
	else {
		tile[t] += tiling(t - 1) % 10007;
		tile[t] += tiling(t - 2) * 2 % 10007;
		tile[t] = tile[t] % 10007;
		return (tile[t]);
	}
}

int		main()
{
	int	t;
	scanf("%d", &t);
	printf("%lld\n", tiling(t));
}

/*
0 : 0			0
1 : 1			1
2 : 2 + 1		3
3 : 3 + 2		5
4 : 5 + 6		11
5 : 8 + 13		21
X(n) = X(n - 1) + 2 * X(n - 2)
*/