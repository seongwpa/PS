#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 시간 초과!
int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	Pcmd(char *str, int *cursor, int *len)
{
	int		i;
	char	nch;

	getchar();
	nch = 0;
	scanf("%c", &nch);
	i = *len;
	while (i >= *cursor)
	{
		str[i] = str[i - 1];
		i--;
	}
	str[*cursor] = nch;
	*cursor += 1;
	*len += 1;
	str[*len] = 0;
}

void	Bcmd(char *str, int *cursor, int *len)
{
	int		i;

	i = *cursor - 1;
	while (i < *len)
	{
		str[i] = str[i + 1];
		i++;
	}
	*len -= 1;
	*cursor -= 1;
}
/*
int		main(void)
{
	char	str[100050];
	char	cmd;
	int		cmdn;
	int		cursor;
	int		length;

	scanf("%s", str);
	scanf("%d", &cmdn);
	length = ft_strlen(str);
	str[length] = 0;
	cursor = length;
	while (cmdn > 0)
	{
		getchar();
		cmd = 0;
		scanf("%c", &cmd);
		if (cmd == 'P')
			Pcmd(str, &cursor, &length);
		else if (cmd == 'B' && cursor != 0)
			Bcmd(str, &cursor, &length);
		else if (cmd == 'L' && cursor != 0)
			cursor -= 1;
		else if (cmd == 'D' && str[cursor] != 0)
			cursor += 1;
		cmdn--;
	}
	printf("%s", str);
}
*/