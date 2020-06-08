#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	init_arr(int *arr, int len)
{
	int		i;

	i = 0;
	while (i < len + 1)
		arr[i++] = 0;
}

int		main(void)
{
	int		input[3];
	int		arr[6000];
	int		i;
	int		cnt[2];

	scanf("%d %d", &input[0], &input[1]);
	init_arr(arr, input[0]);
	printf("<");
	i = 1;
	cnt[0] = 0;
	cnt[1] = input[0];
	while (1)
	{
		if (i > input[0])
			i = i - input[0];
		if (arr[i] == 0)
			cnt[0]++;
		if (arr[i] == 0 && cnt[0] == input[1])
		{
			printf("%d", i);
			arr[i] = 1;
			cnt[0] = 0;
			cnt[1]--;
			if (cnt[1] != 0)
				printf(", ");
			else
			{
				printf(">");
				return (0);
			}
		}
		i++;
	}
}