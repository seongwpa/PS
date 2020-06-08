#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	init_str(char *str)
{
	int		i;

	i = 0;
	while (i < 1020)
		str[i++] = 0;
}

void	rev_str(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	while (str[i] != ' ' && str[i])
		i++;
	len = i;
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
}

void	print_rev_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			rev_str(&str[i]);
			while (str[i] != ' ')
				i++;
		}
		i++;
	}
	printf("%s\n", str);
}

int		main(void)
{
	int		T;
	char	str[2000];

	scanf("%d", &T);
	while (T > 0)
	{
		getchar();
		init_str(str);
		scanf("%[^\n]s", str);
		print_rev_str(str);
		T--;
	}
}