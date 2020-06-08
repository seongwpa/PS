#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 1, b = 1, c = 1;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 || b == 0 || c == 0) {
			if (a == 0 && b == 0 && c == 0)
				return 0;
			else printf("wrong\n");
		}
		else if (a > b && a > c) {
			if (a*a == b*b + c*c)
				printf("right\n");
			else printf("wrong\n");
		}
		else if (b > a && b > c) {
			if (b*b == a*a + c*c)
				printf("right\n");
			else printf("wrong\n");
		}
		else if (c > a && c > b) {
			if (c*c == a*a + b*b)
				printf("right\n");
			else printf("wrong\n");
		}
	}
}