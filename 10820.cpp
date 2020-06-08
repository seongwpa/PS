#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	init_ans(int *ans)
{
	int		i;

	i = 0;
	while (i < 4)
		ans[i++] = 0;
}

void	count_str(char *str, int *ans)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ans[0]++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ans[1]++;
		else if (str[i] >= '0' && str[i] <= '9')
			ans[2]++;
		else if (str[i] == ' ')
			ans[3]++;
		i++;
	}
}

int		main(void)
{
	char	str[200];
	int		ans[4];
	int		i;

	while (scanf("%[^\n]s", str) != -1)
	{
		getchar();
		init_ans(ans);
		count_str(str, ans);
		i = 0;
		while (i < 4)
			printf("%d ", ans[i++]);
		printf("\n");
	}
}