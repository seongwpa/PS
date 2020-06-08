#include<stdio.h>
int sn[10001] = { 0, };

int d() {
	int i, res = 0;
	for (i = 1; i <= 10000; i++) {
		if (i < 10) {
			res = i + i;
			sn[res] = 1;
		}
		else if (i < 100) {
			res = i + i % 10 + i / 10;
			sn[res] = 1;
		}
		else if (i < 1000) {
			res = i + i % 10 + (i / 10) % 10 + i / 100;
			sn[res] = 1;
		}
		else if (i < 10000) {
			res = i + i % 10 + (i / 10) % 10 + (i / 100) % 10 + i / 1000;
			if (res <= 10000) sn[res] = 1;
		}
	}

	for (i = 1; i <= 10000; i++)
		if (sn[i] != 1)
			printf("%d\n", i);
	return 0;
}

int main() {
	d();
	return 0;
}