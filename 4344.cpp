#include<stdio.h>
float score[1001];
float sol[1001];
int main() {
	int C, N, cnt = 0;
	float avg = 0;
	scanf_s("%d", &C);
	for (int i = 0; i < C; i++) {
		scanf_s("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf_s("%f", &score[j]);
			avg += score[j];
		}
		for (int j = 0; j < N; j++) {
			if (score[j] > avg / N)
				cnt++;
		}
		sol[i] = (float)cnt / N;
		avg = 0;
		cnt = 0;
	}
	for (int i = 0; i < C; i++)
		printf("%.3f%\n", sol[i]*100);
	return 0;
}