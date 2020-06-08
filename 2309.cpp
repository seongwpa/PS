#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	Qsort(int *arr, int l, int r)
{
	int i;
	int j;
	int pivot;

	i = l;
	j = r;
	pivot = arr[(l + r) / 2];
	while (i <= j)
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j)
		{
			ft_swap(&arr[i], &arr[j]);
			i++;
			j--;
		}
	}
	if (l < j)
		Qsort(arr, l, j);
	if (i < r)
		Qsort(arr, i, r);
}

int		main(void)
{
	int		N[10];
	int		sum, i, j;
	
	sum = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &N[i]);
		sum += N[i];
	}
	Qsort(N, 0, 8);
	i = 0;
	while (i < 9)
	{
		j = i + 1;
		while (j < 9)
		{
			if (sum - (N[i] + N[j]) == 100)
				break;
			j++;
		}
		if (sum - (N[i] + N[j]) == 100)
			break;
		i++;
	}
	for (int k = 0; k < 9; k++)
		if (k != i && k != j)
			printf("%d\n", N[k]);
}