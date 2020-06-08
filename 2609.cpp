#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	gcd(b, a % b);
}

int		lcm(int a, int b, int gcdn)
{
	return a * b / gcdn;
}

int		main()
{
	int a;
	int b;
	int gcdn;
	scanf("%d %d", &a, &b);

	gcdn = gcd(a, b);
	printf("%d\n%d\n", gcdn, lcm(a, b, gcdn));
	return (0);
}