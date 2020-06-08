/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aog_BOGGLE.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongwpa <seongwpa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 12:27:20 by seongwpa          #+#    #+#             */
/*   Updated: 2020/05/20 12:27:20 by seongwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char board[6][6];
char string[11][15];
int dx[8] = {-1, -1, -1,  1, 1, 1,  0, 0};
int dy[8] = {-1,  0,  1, -1, 0, 1, -1, 1};

bool BOGGLE(int y, int x, int i, char *string)
{
	if (!((y >= 0 && y <= 5) && (x >= 0 && x <= 5)))
		return false;
	if (board[y][x] != string[i])
		return false;
	if (strlen(string) == i + 1)
		return true;
	for (int d = 0; d < 8; d++)
		if (BOGGLE(y + dy[d], x + dx[d], i + 1, string))
			return (true);
	return false;
}

void printB(char *string)
{
	for (int y = 0; y < 5; y++)
		for (int x = 0; x < 5; x++)
			if (board[y][x] == string[0])
				if (BOGGLE(y, x, 0, string))
				{
					printf("%s YES\n", string);
					return;
				}
	printf("%s NO\n", string);
}

int main()
{
	int C, N;
	scanf("%d", &C);
	while (C--)
	{
		for (int i = 0; i < 5; i++)
			scanf("%s", board[i]);
		scanf("%d", &N);
		for (int j = 0; j < N; j++)
		{
			scanf("%s", string[j]);
			printB(string[j]);
		}
	}
}


/*
예제 input
1
URLPM
XPRET
GIAET
XTNZY
XOQRS
6
PRETTY
GIRL
REPEAT
KARA
PANDORA
GIAZAPX

예제 output
PRETTY YES
GIRL YES
REPEAT YES
KARA NO
PANDORA NO
GIAZAPX YES

*/

/* 
물론 시간초과가 난다.
	TC			: 1~ 50개
	WD			: 1~ 10개
	WD LENGTH	: 1~ 10
	해결하려면 DP 필요.
*/