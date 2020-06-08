#include <stdio.h>

int main()
{
	int N;
	long long int An = 0, max = 1, min = 1000001;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%lld", &An);
		if (max < An)
			max = An;
		if (min > An)
			min = An;
	}
	printf("%lld\n", min * max);
}
