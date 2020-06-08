#include<stdio.h>
// »ïÇ×¿¬»êÀÚ ver.
/*
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	a > b ? printf(">") : a == b ? printf("==") : printf("<");
	return 0;
}
*/
// if ver.
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a > b)
		printf(">");
	else if (a == b)
		printf("==");
	else printf("<");
	return 0;
}