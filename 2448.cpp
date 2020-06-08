#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char	g_star[4][7] = { "  *  ",
						 " * * ",
						 "*****" };
char	g_empty[4] = { "   " };

void	print_star(int n)
{
	int		i;
	int		j;
	int		cnt;
	
	cnt = 0;
	i = 0;
	while (cnt < n)
	{
		i %= 3;
		j = 0;
		while (j < n / 3 - 1)
		{
			printf("%s", g_empty);
			j++;
		}
		printf("%s\n", g_star[i]);
		i++;
		cnt++;
	}
}

int		main(void)
{
	int		n;

	scanf("%d", &n);
	print_star(n);

}