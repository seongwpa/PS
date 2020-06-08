#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stack>
#include <algorithm>

int		h[80001];

int		main()
{
	int N;
	long long sum = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &h[i]);

	std::stack<int> s;

	for (int i = 0; i < N; i++)
	{
		while (s.empty() == false && s.top() <= h[i])
		{
			s.pop();
		}

		s.push(h[i]);

		sum += s.size() - 1;
	}
	printf("%lld\n", sum);
}