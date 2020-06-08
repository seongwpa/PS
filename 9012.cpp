#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	init_str(char *str)
{
	int		i;

	i = 0;
	while (i < 52)
		str[i++] = 0;
}

void	check_str(char *str)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] == '(')
			cnt++;
		else if (str[i] == ')')
			cnt--;
		if (cnt < 0)
		{
			printf("NO\n");
			return ;
		}
		i++;
	}
	if (cnt == 0)
		printf("YES\n");
	else
		printf("NO\n");
}

int		main(void)
{
	int		T;
	char	str[60];

	scanf("%d", &T);
	while (T > 0)
	{
		init_str(str);
		scanf("%s", str);
		check_str(str);
		T--;
	}
}