#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
	if (a % b == 0)
		return (b);
	return (gcd(b, a % b));
}

int		main(void)
{
	unsigned long long a, b, res;
	scanf("%lld %lld", &a, &b);
	res = gcd(a, b);
	for (unsigned long long i = 0; i < res; i++)
		printf("1");
	printf("\n");
}