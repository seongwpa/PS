#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		main()
{
	int	N, M, sum, p_m = 1000, u_m = 1000;
	int package, unit;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &package, &unit);
		if (p_m > package)
			p_m = package;
		if (u_m > unit)
			u_m = unit;
	}
	if (u_m * 6 > p_m)
		sum = p_m * (N / 6);
	else
		sum = u_m * 6 * (N / 6);
	if (u_m * (N % 6) > p_m)
		sum += p_m;
	else
		sum += u_m * (N % 6);
	printf("%d\n", sum);
}