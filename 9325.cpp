#include <stdio.h>

int main()
{
	int T, n, q, p;
	long long s;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lld %d", &s, &n);
		while (n--)
		{
			scanf("%d %d", &q, &p);
			s = s + q * p;
		}
		printf("%lld\n", s);
	}
}
