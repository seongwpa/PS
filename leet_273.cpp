#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* strdcat(char *dst, char *src)
{
	int d_len = strlen(dst);
	int s_len = strlen(src);
	char *res = (char*)malloc(sizeof(char*) * (d_len + s_len) + 1);
	int i = 0, j = 0;

	if (dst[0] != 0)
	{
		while (i < d_len)
		{
			res[i] = dst[i];
			i++;
		}
		res[i++] = ' ';
	}
	while (j < s_len)
	{
		res[i] = src[j];
		i++;
		j++;
	}
	res[i] = 0;
	free(dst);
	return (res);
}

char * numberToWords(int num) {
	char *th[4] = { "", "Thousand", "Million", "Billion" };
	char *hu[2] = { "", "Hundred" };
	char *te[10] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
	char *ten[10] = { "", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
	char *on[11] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten" };
	int tmp[4] = { 0, };
	int i = 0;
	char *res = (char*)malloc(1);
	res[0] = 0;
	if (num == 0)
	{
		char *zero = (char*)malloc(5);
		zero[0] = 'Z';
		zero[1] = 'e';
		zero[2] = 'r';
		zero[3] = 'o';
		zero[4] = 0;
		return (zero);
	}
	while (num != 0 && i < 4)
	{
		tmp[i] = num % 1000;
		num /= 1000;
		i++;
	}
	for (int j = 3; j >= 0; j--)
	{
		if (tmp[j])
		{
			if (tmp[j] / 100)
			{
				res = strdcat(res, on[tmp[j] / 100]);
				res = strdcat(res, hu[1]);
				tmp[j] %= 100;
			}
			if (tmp[j] >= 20)
			{
				res = strdcat(res, te[tmp[j] / 10]);
				if (tmp[j] % 10 != 0)
					res = strdcat(res, on[tmp[j] % 10]);
			}
			else if (tmp[j] > 10)
			{
				res = strdcat(res, ten[tmp[j] % 10]);
			}
			else if (tmp[j] != 0)
			{
				res = strdcat(res, on[tmp[j]]);
			}
			if (j != 0)
				res = strdcat(res, th[j]);
		}
	}
	return (res);
}
//10 넣었을 때 ten이 안뜬다... 문제다.
int		main(void)
{
	char *EW1 = numberToWords(123); //clear
	char *EW2 = numberToWords(10);
	char *EW3 = numberToWords(100);
	char *EW4 = numberToWords(12345);
	printf("%s\\\n%s\\\n%s\\\n%s\\\n", EW1, EW2, EW3, EW4);
}
