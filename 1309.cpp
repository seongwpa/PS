#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int		ans[100001] = { 1, 3, 7, 17, 41, };

int		lion(int n)
{
	if (ans[n] != 0)
		return (ans[n]);
	else
	{
		ans[n] += (2 * lion(n - 1)) % 9901;
		ans[n] += lion(n - 2) % 9901;
		ans[n] = ans[n] % 9901;
		return (ans[n]);
	}
}

int		main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", lion(n));
}

/*

Á¡È­½Ä : X(n) = 2 * X(n-1) + X(n-2) 

0 : 1

| | |
1 : 3
1 + 2

| | |
| | |
2 : 7
1 + 4 + 2

| | |
| | |
| | |
3 : 17
1 + 6 + (3 + 2 + 2 + 1) + 2

| | |
| | |
| | |
| | |
1 + 8 + 










*/