#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool judgeSquareSum(int c) {
	for (long i = 0; i * i <= c; i++)
	{
		double b = sqrt(c - i * i);
		if (b == (int)b)
			return (true);
	}
	return (false);
}


int main()
{
	judgeSquareSum(3) ? printf("true\n") : printf("false\n");
}