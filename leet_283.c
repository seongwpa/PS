/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leet_283.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <seoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 15:53:25 by seongwpa          #+#    #+#             */
/*   Updated: 2020/05/19 16:02:15 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
Given an array nums,
write a function to move all
0's to the end of
it while maintaining
the relative order of the non-zero elements.
*/

void moveZeroes(int* nums, int numsSize){
	int *tmp = (int*)malloc(sizeof(int) * (numsSize + 1));
	int j = 0;

	for (int i = 0; i < numsSize; i++)
		if (nums[i] != 0)
		{
			tmp[j] = nums[i];
			j++;
		}
	while (j < numsSize)
	{
		tmp[j] = 0;
		j++;
	}
	for (int i = 0; i < numsSize; i++)
		nums[i] = tmp[i];
	free(tmp);
}
