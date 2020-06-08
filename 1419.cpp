#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int left, right, k, cnt = 0;
	scanf("%d", &left);
	scanf("%d", &right);
	scanf("%d", &k);
	int num = k * (k + 1) / 2;
	while (num < left)
		num += k;
	while (num <= right)
	{
		cnt++;
		num += k;
	}
	printf("%d\n", cnt);
}
