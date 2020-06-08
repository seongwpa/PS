#include <stdio.h>

int main()
{
	int T, a, b, c;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d", &a, &b);
		c = a;
		b = b % 4 + 4;
		for (int i = 1; i < b; i++)
			c = (c * a) % 10;
		if (c == 0)
			c = 10;
		printf("%d\n", c);
	}
}
