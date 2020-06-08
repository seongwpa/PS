#include <stdio.h>

int main()
{
	int N, cnt = 0;
	scanf("%d", &N);
	for (int i = 5; i <= N; i *= 5)
		cnt += (N / i);
	printf("%d\n", cnt);
}
