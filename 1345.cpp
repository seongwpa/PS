#include <stdio.h>

int main()
{
	int N;
	double A[55] = { 0, };
	double As, mean = 0;
	scanf("%d %lf", &N, &As);
	for (int i = 0; i < N; i++)
		scanf("%lf", &A[i]);
	mean = (A[N - 1] - As) / N;
	int j = 0;
	while (j < N)
	{
		if ((int)A[j] - (int)(As + mean * j) == 0)
			break;
		j++;
	}
	if (j == N)
		printf("%.10lf\n", mean);
	else printf("-1\n");
}
