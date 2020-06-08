#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
//					binary print함수
void print_binary(int x)
{
	if (x == 0)
		return;
	print_binary(x >> 1);
	printf("%d", (x & 1) ? 1 : 0);
}
*/
//					bit shift
int main() {
	int X, cnt = 0;
	scanf("%d", &X);
//	print_binary(X);
//	printf("\n");
	while (X > 0)
	{
		if (X & 1)
			cnt++;
		X >>= 1;
	}
	printf("%d\n", cnt);
}

/*
//					normal
int main() {
	int sol[7] = { 64, 32, 16, 8, 4, 2, 1 };
	int X, cnt = 0;
	scanf("%d", &X);
	for (int i = 0; i < 7; i++) {
		if (X >= sol[i]) {
			X -= sol[i];
			cnt++;
		}
	}
	printf("%d", cnt);
}
*/
