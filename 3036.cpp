#include <stdio.h>

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	else return gcd(b, a % b);
}

int main()
{
	int N;
	int arr[150] = { 0, };
	int sol[150] = { 0, };
	scanf("%d %d", &N, &arr[0]);
	for (int i = 1; i < N; i++)
	{
		scanf("%d", &arr[i]);
		sol[i] = gcd(arr[0], arr[i]);
	}
	for (int i = 1; i < N; i++)
		printf("%d/%d\n", arr[0] / sol[i], arr[i] / sol[i]);
}
