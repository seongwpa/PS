#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	init_inp(char *inp)
{
	int		i;

	i = 0;
	while (i < 20)
		inp[i++] = 0;
}

void	push_fdq(int *deq, int p, int *idx)
{
	int		i;

	i = *idx;
	while (i > 0)
	{
		deq[i] = deq[i - 1];
		i--;
	}
	deq[0] = p;
	*idx += 1;
}

void	push_bdq(int *deq, int p, int *idx)
{
	deq[*idx] = p;
	*idx += 1;
}

void	pop_fdq(int *deq, int *idx)
{
	int		i;

	i = 1;
	printf("%d\n", deq[0]);
	while (i <= *idx)
	{
		deq[i - 1] = deq[i];
		i++;
	}
	*idx -= 1;
}

void	pop_bdq(int *deq, int *idx)
{
	printf("%d\n", deq[*idx - 1]);
	*idx -= 1;
}

int		main(void)
{
	int		T;
	int		deque[10001];
	char	inp[20];
	int		inp_n;
	int		idx;

	idx = 0;
	scanf("%d", &T);
	while (T > 0)
	{
		scanf("%s", inp);
		if (inp[0] == 'p' && inp[1] == 'u' && inp[5] == 'f')
		{
			scanf("%d", &inp_n);
			push_fdq(deque, inp_n, &idx);
		}
		else if (inp[0] == 'p' && inp[1] == 'u' && inp[5] == 'b')
		{
			scanf("%d", &inp_n);
			push_bdq(deque, inp_n, &idx);
		}
		else if (inp[0] == 'p' && inp[1] == 'o' && inp[4] == 'f')
			idx == 0 ? printf("-1\n") : pop_fdq(deque, &idx);
		else if (inp[0] == 'p' && inp[1] == 'o' && inp[4] == 'b')
			idx == 0 ? printf("-1\n") : pop_bdq(deque, &idx);
		else if (inp[0] == 's')
			printf("%d\n", idx);
		else if (inp[0] == 'e')
			printf("%d\n", idx == 0 ? 1 : 0);
		else if (inp[0] == 'f')
			printf("%d\n", idx == 0 ? -1 : deque[0]);
		else if (inp[0] == 'b')
			printf("%d\n", idx == 0 ? -1 : deque[idx - 1]);
		T--;
	}
}