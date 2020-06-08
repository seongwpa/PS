#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void	init_inp(char *inp)
{
	int		i;

	i = 0;
	while (i < 20)
		inp[i++] = 0;
}

void	push_q(int *q, int p, int *idx)
{
	q[*idx] = p;
	*idx += 1;
}

void	pop_q(int *q, int *idx)
{
	int		i;

	i = 1;
	printf("%d\n", q[0]);
	while (i <= *idx)
	{
		q[i - 1] = q[i];
		i++;
	}
	*idx -= 1;
}

int		main(void)
{
	int		T;
	int		que[10001];
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
			push_q(que, inp_n, &idx);
		}
		else if (inp[0] == 'p' && inp[1] == 'o')
			idx == 0 ? printf("-1\n") : pop_q(que, &idx);
		else if (inp[0] == 's')
			printf("%d\n", idx);
		else if (inp[0] == 'e')
			printf("%d\n", idx == 0 ? 1 : 0);
		else if (inp[0] == 'f')
			printf("%d\n", idx == 0 ? -1 : que[0]);
		else if (inp[0] == 'b')
			printf("%d\n", idx == 0 ? -1 : que[idx - 1]);
		T--;
	}
}