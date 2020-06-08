/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leet_283 yujo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 15:51:40 by yujo              #+#    #+#             */
/*   Updated: 2020/05/19 15:51:40 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Given an array nums,
write a function to move all
0's to the end of
it while maintaining
the relative order of the non-zero elements.
*/

#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int* nums, int numsSize)
{
    int *result;
    int check = 0;

    result = (int *)malloc(sizeof(int) * numsSize);

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            result[check] = nums[i];
            check++;
        }
    }

    while(sizeof(result) < numsSize)
    {
        result[check] = 0;
        check++;
    }

    for (int i = 0; i < numsSize)
        nums[i] = result[i];

    free(result);
}

int main(void)
{
    int test[5] = {0, 1, 0, 3, 12};

    move

}
