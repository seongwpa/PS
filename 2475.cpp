#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		main(void)
{
	int N, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &N);
		sum = sum + N * N;
	}
	printf("%d\n", sum % 10);
}