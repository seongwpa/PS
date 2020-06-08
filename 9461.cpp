#include <stdio.h>

long long int dp[200] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, };

long long int wave(int n)
{
	if (n == 0)
		return (0);
	else if (dp[n] != 0)
		return (dp[n]);
	else
	{
		dp[n] = wave(n - 1) + wave(n - 5);
		return (dp[n]);
	}
}

int	main()
{
	int T, N;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &N);
		printf("%lld\n", wave(N));
	}
}
