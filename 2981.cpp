#include <stdio.h>
#include <algorithm>

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	else return gcd(b, a % b);
}

int main()
{
	int N, GCD;
	int Narr[500] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &Narr[i]);
	std::sort(Narr, Narr + N);
	GCD = Narr[1] - Narr[0];
	for (int i = 2; i < N; i++)
		GCD = gcd(GCD, Narr[i] - Narr[i - 1]);
	for (int i = 2; i <= GCD / 2; i++)
		if (GCD % i == 0)
			printf("%d ", i);
	printf("%d\n", GCD);
}
