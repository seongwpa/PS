#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char brd1[9][9] = { { 'B','W','B','W','B','W','B','W' },
					{ 'W','B','W','B','W','B','W','B' },
					{ 'B','W','B','W','B','W','B','W' },
					{ 'W','B','W','B','W','B','W','B' },
					{ 'B','W','B','W','B','W','B','W' },
					{ 'W','B','W','B','W','B','W','B' },
					{ 'B','W','B','W','B','W','B','W' },
					{ 'W','B','W','B','W','B','W','B' } };
char brd2[9][9] = { { 'W','B','W','B','W','B','W','B' },
					{ 'B','W','B','W','B','W','B','W' },
					{ 'W','B','W','B','W','B','W','B' },
					{ 'B','W','B','W','B','W','B','W' },
					{ 'W','B','W','B','W','B','W','B' },
					{ 'B','W','B','W','B','W','B','W' },
					{ 'W','B','W','B','W','B','W','B' },
					{ 'B','W','B','W','B','W','B','W' } };
char board[70][70];
char tmp[9][9];

void	tmpcpy(int i, int j)
{
	for (int a = i; a < i + 8; a++)
		for (int b = j; b < j + 8; b++)
			tmp[a - i][b - j] = board[a][b];
}

int		cmpboard()
{
	int cnt1 = 0, cnt2 = 0, ans = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (tmp[i][j] != brd1[i][j])
				cnt1 += 1;
			if (tmp[i][j] != brd2[i][j])
				cnt2 += 1;
		}
	}
	ans = cnt1 > cnt2 ? cnt2 : cnt1;
	return (ans);
}

int		main(void)
{
	int N, M;
	int cnt, ans = 64;
	scanf("%d %d", &N, &M);
	getchar();
	for (int i = 0; i < N; i++)
	{
		scanf("%s", board[i]);
		getchar();
	}
	for (int i = 0; i < N - 7; i++)
	{
		for (int j = 0; j < M - 7; j++)
		{
			tmpcpy(i, j);
			cnt = cmpboard();
			ans = ans > cnt ? cnt : ans;
		}
	}
	printf("%d\n", ans);
}