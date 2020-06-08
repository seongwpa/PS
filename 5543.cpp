#include <stdio.h>

int	main()
{
	int Bmin = 2000, B;
	int Dmin = 2000, D;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &B);
		if (Bmin > B)
			Bmin = B;
	}
	for (int j = 0; j < 2; j++)
	{
		scanf("%d", &D);
		if (Dmin > D)
			Dmin = D;
	}
	printf("%d\n", Bmin + Dmin - 50);
}
