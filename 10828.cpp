#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	init_inp(char *inp)
{
	int		i;

	i = 0;
	while (i < 20)
		inp[i++] = 0;
}

void	push_s(int *q, int p, int *idx)
{
	q[*idx] = p;
	*idx += 1;
}

void	pop_s(int *q, int *idx)
{
	printf("%d\n", q[*idx - 1]);
	*idx -= 1;
}

int		main(void)
{
	int		T;
	int		stack[10001];
	char	inp[20];
	int		inp_n;
	int		idx;

	idx = 0;
	scanf("%d", &T);
	while (T > 0)
	{
		scanf("%s", inp);
		if (inp[0] == 'p' && inp[1] == 'u')
		{
			scanf("%d", &inp_n);
			push_s(stack, inp_n, &idx);
		}
		else if (inp[0] == 'p' && inp[1] == 'o')
			idx == 0 ? printf("-1\n") : pop_s(stack, &idx);
		else if (inp[0] == 's')
			printf("%d\n", idx);
		else if (inp[0] == 'e')
			printf("%d\n", idx == 0 ? 1 : 0);
		else if (inp[0] == 't')
			printf("%d\n", idx == 0 ? -1 : stack[idx - 1]);
		T--;
	}
}