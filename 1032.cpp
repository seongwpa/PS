#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		main(void)
{
	int		T;
	int		i;
	char	str[60];
	char	fstr[60];

	scanf("%d%s", &T, fstr);
	while (--T > 0)
	{
		i = 0;
		scanf("%s", str);
		while (fstr[i])
		{
			if (fstr[i] != '?' && fstr[i] != str[i])
				fstr[i] = '?';
			i++;
		}
	}
	printf("%s\n", fstr);
}