#include<stdio.h>

int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
		if (b > c)
			printf("%d", b);
		else if (a > c)
			printf("%d", c);
		else printf("%d", a);
	else
		if (c > b)
			printf("%d", b);
		else if (a > c)
			printf("%d", a);
		else printf("%d", c);
	return 0;
}