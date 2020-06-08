#include <stdio.h>

int h[100020];

int main()
{
	int N, cnt = 1, max;
	scanf("%d", &N);
	for (int i = N - 1; i >= 0; i--)
		scanf("%d", &h[i]);
	max = h[0];
	for (int j = 1; j < N; j++)
		if (max < h[j])
		{
			max = h[j];
			cnt++;
		}
	printf("%d\n", cnt);
}
