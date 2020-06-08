/*
Given an array nums,
write a function to move all
0's to the end of
it while maintaining
the relative order of the non-zero elements.

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
	int cnt = 0;
	int i, j, n;
	int *arr = (int *)malloc(sizeof(int)*(numsSize + 1));

	j = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] == 0)
			cnt++;
		else
		{
			arr[j] = nums[i];
			j++;
		}
	}
	while (j < numsSize)
	{
		arr[j] = 0;
		j++;
	}
	for (i = 0; i < numsSize; i++)
		nums[i] = arr[i];
	free(arr);
}
