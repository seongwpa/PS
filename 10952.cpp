#include<stdio.h>
int main() {
	int a, b;
	while (1) {
		scanf_s("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		else
			printf("%d\n", a + b);
	}
	return 0;
}