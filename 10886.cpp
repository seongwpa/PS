#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		main(void)
{
	int		N, K;
	int		cnt0 = 0, cnt1 = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &K);
		K == 0 ? cnt0++ : cnt1++;
	}
	cnt0 > cnt1 ? printf("Junhee is not cute!\n") : printf("Junhee is cute!\n");
}