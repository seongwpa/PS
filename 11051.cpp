#include <stdio.h>

int DParr[1001][1001] = { 0, };

int DP(int n, int k)
{
	if (n == k || k == 0)
		return 1;
	else if (DParr[n][k] != 0)
		return DParr[n][k];
	else
	{
		DParr[n][k] = (DP(n - 1, k - 1) + DP(n - 1, k)) % 10007;
		return DParr[n][k];
	}
}

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	printf("%d\n", DP(N, K));
}
