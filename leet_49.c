/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leet_49.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongwpa <seongwpa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 15:26:45 by seongwpa          #+#    #+#             */
/*   Updated: 2020/05/19 15:26:45 by seongwpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

/*
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
*/

/*
sol 1 : sort and compare

sol 2 : check by arr

*/

void init_num_arr(int *num)
{
    for(int i = 0; i < 26; i++)
        num[i] = 0;
}

bool	cmp_num_arr(int *na1, int *na2)
{
	for (int i = 0; i < 26; i++)
		if (na1[i] != na2[i])
			return (false);
	return (true);
}


char *** groupAnagrams(char ** strs, int strsSize, int* returnSize, int** returnColumnSizes)
{
	int f_arr[27];
	int n_arr[27];


	for (int i = 0; i < strsSize; i++)
	{
		init_num_arr(f_arr);
		for (int k = 0; strs[i][k]; k++)
			f_arr[strs[i][k] - 'a']++;
		for (int j = i + 1; j < strsSize; j++)
		{
			init_num_arr(n_arr);
			for (int l = 0; strs[j][l]; l++)
			{
				n_arr[strs[j][l] - 'a']++;
			}
			cmp_num_arr(f_arr, n_arr);
		}
	}

}
