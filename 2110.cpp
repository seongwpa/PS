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
	int	N;
	int	C;
	int	X[200010];
	int	i;

	i = 0;
	scanf("%d %d", &N, &C);
	while (i < N)
		scanf("%d", &X[i++]);
	Qsort(X, 0, N - 1);

}
