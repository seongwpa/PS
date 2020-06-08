#include<stdio.h>
int main() {
	int N[8];
	for (int i = 0; i < 8; i++)
		scanf_s("%d", &N[i]);
	if (N[0] == 1) {
		for (int i = 1; i < 8; i++)
			if (N[i] != N[i - 1] + 1) {
				printf("mixed");
				return 0;
			}
		printf("ascending");
		return 0;
	}
	else if(N[0] == 8) {
		for(int i = 1; i <8; i++)
			if (N[i] != N[i - 1] - 1) {
				printf("mixed");
				return 0;
			}
		printf("descending");
		return 0;
	}
	else printf("mixed");
	return 0;
}