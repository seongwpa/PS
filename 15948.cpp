#include <stdio.h>

int A[60];
long long B[60];

long long power(int m)
{
	long long ret = 1;
	int t = 2;
	for (int i = 0; i < m; i++)
		ret *= t;
	return (ret);
}

int main(void)
{
	long long n, m;
	scanf("%lld %lld", &n, &m);
	for (int i = 0; i < m; i++)
		scanf("%d", &A[i]);
	for (int k = m - 1; k >= 0; k--)
	{
		if (n % 2 == 0)
		{
			B[k] = A[k] * (n + power(k + 1) - 2);
			n /= 2;
		}
		else
		{
			B[k] = A[k] * n;
			n = (n + 1) / 2;
		}
	}
	for (int i = 0; i < m - 1; i++)
		printf("%lld ", B[i]);
	printf("%lld\n", B[m - 1]);
}

/*

1 + (2^m / n) = (A1 / B1 + 1) * ... * (Am / Bm + 1)
			 = (a + 1) * ... * (z + 1) / (a * ... * z)


pi(1 + 1/x)

*/
