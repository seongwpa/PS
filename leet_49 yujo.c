/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leet_49 yujo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 15:24:50 by yujo              #+#    #+#             */
/*   Updated: 2020/05/19 15:24:50 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
*/

#include <stdio.h>

int alphaPrime[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
    31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};

char *** groupAnagrams(char ** strs, int strsSize, int* returnSize, int** returnColumnSizes)
{
    /*
    1. 들어오는 단어를 판별 후 같은 것끼리 정렬?
    2.
    3.
    */
    for (int i = 0; i < strsSize)
    {

    }

}

int main(void)
{
    char strs[6][3] = {"eat", "tea", "tan", "ate", "nat", "bat"};

    return 0;
}
