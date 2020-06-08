#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

uint32_t reverseBits(uint32_t n) {
	uint32_t rev_n = 0x00000000;
	for (int i = 0; i < 32; i++)
	{
		rev_n = (n & 1) + (rev_n << 1);
		n >>= 1;
	}
	return (rev_n);
}

void print_binary(int x, int y = 32)
{
	if (y <= 0)
	{
		puts("");
		return;
	}
	print_binary(x >> 1, y - 1);
	printf("%c", (x & 1) ? '1' : '0');
}

int main()
{
	print_binary(reverseBits(0b00000010100101000001111010011100));
	print_binary(0b00000010100101000001111010011100);
	puts("");
}