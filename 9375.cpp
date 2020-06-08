#include <stdio.h>
#include <string.h>

char kind[40][40];
int kcnt[40] = { 0, };

int main()
{
	int T, n, ans = 1, flag;
	char temp[40];
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		getchar();
		scanf("%s %s", temp, kind[0]);
		kcnt[0] = 1;
		for (int i = 1; i < n; i++)
		{
			flag = 0;
			scanf("%s %s", temp, kind[i]);
			for (int j = 0; j < i; j++)
			{
				if (strcmp(kind[i], kind[j]) == 0)
				{
					kcnt[j]++;
					flag = 1;
					break ;
				}
			}
			if (flag == 0)
				kcnt[i]++;
		}
		for (int i = 0; i < n; i++)
			ans = ans * (kcnt[i] + 1);
		printf("%d\n", ans - 1);
	}
}
