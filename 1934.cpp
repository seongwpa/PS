#include <stdio.h>

int gcd(int a, int b)
{
	if (a % b == 0)
		return (b);
	else
		gcd(b, a % b);
}

int main()
{
	int T, a, b;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d", &a, &b);
		if (a > b)
			printf("%d\n", a * b / gcd(a, b));
		else printf("%d\n", a * b / gcd(b, a));
	}
}
