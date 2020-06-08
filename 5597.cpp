#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		main(void)
{
	int		*std[40] = { 0, };
	int		N;

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &N);
		std[N]++;
	}
	for (int i = 1; i <= 30; i++)
		if (std[i] == 0)
			printf("%d\n", i);
}