//clac.c
#include <stdio.h>

int main(void) {
	int decimal = 42; //10진법
	int octal = 052; //8진법
	int hex = 0x2A; //16진법
	int binary = 0b101010; //2진법

	printf("Decimal: % d\n", decimal);
	printf("octal %o (prefix 0: 0%o) = %d\n",
		octal, octal, octal);
	printf("hexadecimal %x (prefix 0x: 0x%x) = %d\n",
		hex, hex, hex);
	printf("Binary (manual): 0b101010 = %d\n",
		binary);


	return 0;
}