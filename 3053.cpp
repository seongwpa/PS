#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14159265358979323

int main() {
	int n;
	double sq;
	scanf("%d", &n);
	sq = 2 * n*n;
	printf("%f\n%f", n*n*PI, sq);
}