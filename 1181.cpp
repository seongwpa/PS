#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char	str[20050][60];

int		ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dst, const char *src)
{
	int		i;
	
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i = 0;

	while (s1[i] && s2[i] && ((unsigned char)s1[i] == (unsigned char)s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	lensort(int N)
{
	char tmp[60] = { 0, };

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (ft_strlen(str[i]) > ft_strlen(str[j]))
			{
				ft_strcpy(tmp, str[i]);
				ft_strcpy(str[i], str[j]);
				ft_strcpy(str[j], tmp);
			}
		}
	}
}

void	cmpsort(int N)
{
	char tmp[60] = { 0, };
	int	scmp = 0;

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (ft_strlen(str[i]) == ft_strlen(str[j]))
			{
				scmp = ft_strcmp(str[i], str[j]);
				if (scmp > 0)
				{
					ft_strcpy(tmp, str[i]);
					ft_strcpy(str[i], str[j]);
					ft_strcpy(str[j], tmp);
				}
			}
		}
	}
}

int		main(void)
{
	int		N;

	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++)
	{
		scanf("%s", str[i]);
		getchar();
	}
	str[N][0] = 0;
	lensort(N);
	cmpsort(N);
	for (int i = 0; i < N; i++)
		if (ft_strcmp(str[i], str[i + 1]) != 0)
			printf("%s\n", str[i]);
}
