#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main(void)
{
	char	a[200];
	while (scanf("%[^\n]s", a) != -1)
	{
		getchar();
		printf("%s\n", a);
	}
}