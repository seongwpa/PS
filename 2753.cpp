#include <stdio.h>
// if ver.
/*
int main() {
	int a;
	scanf_s("%d", &a);
	if (a % 400 == 0)
		printf("1");
	else if (a % 100 == 0)
		printf("0");
	else if (a % 4 == 0)
		printf("1");
	else printf("0");
	return 0;
}
*/
// 삼항연산자 ver.
int main() {
	int a;
	scanf_s("%d", &a);
	a % 400 == 0 ?
		printf("1") :
		a % 100 == 0 ?
		printf("0") :
		a % 4 == 0 ?
		printf("1") :
		printf("0");
	return 0;
}