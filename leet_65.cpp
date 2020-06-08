#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isNumber(char * s) {
	int i = 0;
	int flag = 0;
	if (s[0] == '.' && s[1] == 'e')
		return (false);
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			flag = 1;
		i++;
	}
	if (flag == 0)
		return (false);
	i = 0;
	while (s[i] == ' ')
	{
		i++;
		if (!s[i] || s[i] == 'e')
			return (false);
	}
	if (s[i] == '-' || s[i] == '+')
	{
		i++;
		if (!s[i] || s[i] == 'e')
			return (false);
	}
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] == '.')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (i == 0)
		return (false);
	if (s[i] == 'e')
	{
		i++;
		if (!s[i] || s[i] == ' ')
			return (false);
		if (s[i] == '-' || s[i] == '+')
		{
			i++;
			if (s[i] < '0' || s[i] > '9')
				return (false);
		}
	}
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	while (s[i] == ' ')
		i++;
	return (strlen(s) == i);
}

int main()
{
	isNumber("4e+") ? printf("true\n") : printf("false\n");
}