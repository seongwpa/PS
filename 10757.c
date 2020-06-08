#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	init_arr(char *a)
{
	int		i;
	
	i = 0;
	while (i < 10010)
	{
		a[i] = 0;
		i++;
	}
}

int		ft_strlen(char *a)
{
	int		i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

void	plus_arr(char *a, char *b, char *ans)
{
	int		i;
	int		temp;
	int		a_size;
	int		b_size;
	int		sum;

	b_size = ft_strlen(b) - 1;
	a_size = ft_strlen(a) - 1;
	i = 0;
	temp = 0;
	while (a_size >= 0)
	{
		if (b_size >= 0)
			sum = a[a_size] - '0' + b[b_size] - '0' + temp;
		else
			sum = a[a_size] - '0' + temp;
		temp = sum / 10;
		sum %= 10;
		ans[i++] = sum + '0';
		a_size--;
		b_size--;
	}
	if (temp != 0)
		ans[i++] = temp + '0';
	ans[i] = 0;
}

int		main(void)
{
	char	a[10010];
	char	b[10010];
	char	ans[10020];
	int		i;

	init_arr(a);
	init_arr(b);
	init_arr(ans);
	scanf("%s %s", a, b);
	ft_strlen(a) > ft_strlen(b) ? plus_arr(a, b, ans) : plus_arr(b, a, ans);
	i = ft_strlen(ans) - 1;
	while (i >= 0)
	{
		printf("%c", ans[i--]);
	}
}