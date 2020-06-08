#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * defangIPaddr(char * address) {
	int len = strlen(address);
	char *res = (char*)calloc(sizeof(char),(len + 7));
	res[0] = 0;
	int j = 0;
	for (int i = 0; i < len; i++)
	{
		if (address[i] >= '0' && address[i] <= '9')
			res[j] = address[i];
		else
		{
			res[j++] = '[';
			res[j++] = '.';
			res[j] = ']';
		}
		j++;
	}
	return (res);
}

int main(void)
{
	printf("%s\n", defangIPaddr("1.1.1.1"));
}