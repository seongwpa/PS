#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[6];
	while (1)
	{
		int tmp = 1;
		int numlen = 0;
		scanf("%s", input);
		if (!strcmp(input, "0"))
			return (0);
		numlen = strlen(input);
		
		for (int i = 0; i < numlen / 2; i++)
		{
			if (input[i] != input[numlen - i - 1])
			{
				tmp = 0;
				break;
			}
		}
		tmp == 0 ? printf("no\n") : printf("yes\n");
	}
}
