#include <stdio.h>

int reverse(int x) {
	long long tmp = (long long)x;
	long long rev_x = 0;
	int sign = 0;
	if (tmp < 0)
	{
		sign = 1;
		tmp *= -1;
	}
	while (tmp > 0)
	{
		rev_x = rev_x * 10 + tmp % 10;
		tmp /= 10;
	}
	if (sign)
		rev_x *= -1;
	if (rev_x > 2147483647)
		return (0);
	else
		return (int)rev_x;
}

int main()
{
	printf("%d\n", reverse(1534236469));
}