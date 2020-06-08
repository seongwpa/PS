#include <stdio.h>
int main() {
	int sol[42] = { 0, };
	int a;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a);
		sol[a % 42]++;
	}
	a = 0;
	for (int i = 0; i < 42; i++)
		if (sol[i] != 0) a++;
	printf("%d", a);
	return 0;
}