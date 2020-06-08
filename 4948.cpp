#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		prime[246913] = { 0, };
int		arr[123456];

int		main()
{
	int n, cnt = 0;
	long long k = 0;
	for (long long i = 2; i <= 246913; i++)
	{
		if (!prime[i])
		{
			arr[k++] = i;
			for (long long j = i * i; j <= 246913; j += i)
			{
				prime[j] = 1;
			}
		}
	}

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			return (0);
		else
		{
			cnt = 0;
			for (int i = 0; i < k; i++)
			{
				if (arr[i] > n)
				{
					if (arr[i] <= n * 2)
						cnt++;
					else
						break;
				}
			}
			printf("%d\n", cnt);
		}
	}
}