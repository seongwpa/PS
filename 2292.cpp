#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		main(void)
{
	int		N;
	int		i = 1, cnt = 1;

	scanf("%d", &N);
	N -= 1;
	while (N > 0)
	{
		N -= i * 6;
		i++;
		cnt++;
	}
	printf("%d\n", cnt);
}