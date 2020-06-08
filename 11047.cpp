#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		main()
{
	int	N, K, cnt = 0;
	int A[11];
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (int i = N - 1; i >= 0; i--)
	{
		while (K - A[i] >= 0)
		{
			cnt++;
			K -= A[i];
			if (K == 0)
			{
				printf("%d\n", cnt);
				return (0);
			}
		}
	}
}