#include <stdio.h>
#include <stdbool.h>

bool isUgly(int num) {
	if (num <= 0)
		return (false);
	if (num == 1)
		return (true);
	while (num % 5 == 0)
		num /= 5;
	while (num % 3 == 0)
		num /= 3;
	while (num % 2 == 0)
		num /= 2;
	if (num == 1)
		return (true);
	else return (false);
}

int nthUglyNumber(int n) {
	int cnt = 0;
	int i = 1;
	while (cnt != n)
		if (isUgly(i++))
			cnt++;
	return (--i);
}

int main()
{
	printf("%d\n", nthUglyNumber(10));
}