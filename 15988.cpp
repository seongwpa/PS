#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long	ans[1000001] = { 0, 1, 2, 4, };

long long	sumott(int n)
{
	if (n == 1)
		return (1);
	else if (ans[n] != 0)
		return (ans[n]);
	else
	{
		ans[n] += sumott(n - 1) % 1000000009;
		ans[n] += sumott(n - 2) % 1000000009;
		ans[n] += sumott(n - 3) % 1000000009;
		ans[n] = ans[n] % 1000000009;
		return (ans[n]);
	}
}

int		main()
{
	int	n;
	int input;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		printf("%lld\n", sumott(input));
	}
}