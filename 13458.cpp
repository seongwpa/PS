#include <stdio.h>

int main()
{
	int N, B, C;
	long long int ret = 0;
	int A[1000010] = { 0, };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	scanf("%d %d", &B, &C);
	for (int i = 0; i < N; i++)
	{
		if (A[i] > 0)
		{
			A[i] -= B;
			ret++;
		}
		if (A[i] > 0)
		{
			if (A[i] % C != 0)
				ret = ret + A[i] / C + 1;
			else ret = ret + A[i] / C;
		}
	}
	printf("%lld\n", ret);
}
