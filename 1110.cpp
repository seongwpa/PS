#include<stdio.h>
int main() {
	int N, temp, cnt=0;
	scanf_s("%d", &N);
	temp = N;
	while (1) {
		N = N % 10 * 10 + ((N / 10 + N % 10)%10);
		cnt+=1;
		if (N == temp)
			break;
	}
	printf("%d", cnt);
	return 0;
}