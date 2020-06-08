#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	init_alpha(int *alp)
{
	int		i;

	i = 0;
	while (i < 26)
		alp[i++] = 0;
}

int		main(void)
{
	int		i;
	int		alpha[26];
	char	str[200];

	scanf("%s", str);
	init_alpha(alpha);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			alpha[str[i] - 'a']++;
		i++;
	}
	i = 0;
	while (i < 26)
		printf("%d ", alpha[i++]);
}