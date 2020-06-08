#include <stdio.h>

long long int dp[50] =  {0, 1, 1, 2, 3, 5, 8 ,13, };

long long int fib(int n)
{
	if (n == 0)
		return (0);
	else if (dp[n] != 0)
		return (dp[n]);
	else
	{
		dp[n] = fib(n - 1) + fib(n - 2);
		return (dp[n]);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld\n", fib(n));
}
