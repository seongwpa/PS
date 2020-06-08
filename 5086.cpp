#include <stdio.h>

int main()
{
	int x, y;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
			return 0;
		else if (y % x == 0)
			printf("factor\n");
		else if (x % y == 0)
			printf("multiple\n");
		else
			printf("neither\n");
	}
}
