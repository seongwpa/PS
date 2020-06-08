#include <stdio.h>
#include <string.h>

int	main()
{
	int N;
	char name[100];
	scanf("%d", &N);
	while (N--)
	{
		scanf("%s", name);
		if (strcmp(name, "anj") == 0)
		{
			printf("뭐야;\n");
			return (0);
		}
	}
	printf("뭐야?\n");
}
