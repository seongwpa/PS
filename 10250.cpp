#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T, H, W, N;

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		printf("%d\n", N % H == 0 ? H * 100 + N / H : N % H * 100 + N / H + 1);
	}
}