#include <stdio.h>

int main(void)
{
	int cnt, N, flag = 0;
	int i, j, arr[10001] = {0, };

	for (j = 2; j < 10001 / j; j++)
	{
		if (!arr[j])
		{
			for (i = j * j; i < 10001; i += j)
				if (i % j == 0)
					arr[i] = 1;
		}
	}

	scanf("%d", &cnt);
	while (cnt--)
	{
		scanf("%d", &N);
		for (i = N / 2; i > 1; i--)
		{
			flag = 0;
			if (arr[i] == 1)
				continue;
			for (j = N / 2; j <= N && flag == 0; j++)
			{
				if (arr[j] == 1)
					continue;
				if (i + j == N)
				{
					flag = 1;
					printf("%d %d\n", i, j);
				}
			}
			if (flag == 1)
				break;
		}
    }
    return 0;
}
