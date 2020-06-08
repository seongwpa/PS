#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long	tile[1001] = { 1, 1, 2, 3, 5, 8, };

long long	tiling(int t)
{
	if (tile[t] != 0)
		return (tile[t]);
	else {
		tile[t] += tiling(t - 1) % 10007;
		tile[t] += tiling(t - 2) % 10007;
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
1 : 1
2 : 2
3 : 3
4 : 5
5 : 8
*/