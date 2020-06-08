#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	charchange(char *s)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 'a';
		i++;
	}
}

int main(void)
{
	char	str[200];

	scanf("%s", str);
	charchange(str);
	printf("%s", str);
}