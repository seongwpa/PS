#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>

int	main()
{
	int p[1001];
	int N, res = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &p[i]);
	std::sort(p, p + N);

	for (int i = 0; i < N; i++)
		res += p[i] * (N - i);
	printf("%d\n", res);
}