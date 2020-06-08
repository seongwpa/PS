#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <list>

int	main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		char L[1000001] = { 0, };
		scanf("%s", L);
		std::list<char> ans;
		std::list<char>::iterator itr = ans.end();
		for (int i = 0; L[i]; i++)
		{
			if (L[i] == '<') {
				if (itr == ans.begin()) continue;
				itr--;
			}
			else if (L[i] == '>') {
				if (itr == ans.end()) continue;
				itr++;
			}
			else if (L[i] == '-') {
				if (itr == ans.begin()) continue;
				itr = ans.erase(--itr);
			}
			else {
				ans.insert(itr, L[i]);
			}
		}
		for (auto it = ans.begin(); it != ans.end(); it++)
			printf("%c", *it);
		printf("\n");
		ans.clear();
	}
}