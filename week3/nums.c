//clac.c
#include <stdio.h>

int main(void) {
	int decimal = 42; //10����
	int octal = 052; //8����
	int hex = 0x2A; //16����
	int binary = 0b101010; //2����

	printf("Decimal: % d\n", decimal);
	printf("octal %o (prefix 0: 0%o) = %d\n",
		octal, octal, octal);
	printf("hexadecimal %x (prefix 0x: 0x%x) = %d\n",
		hex, hex, hex);
	printf("Binary (manual): 0b101010 = %d\n",
		binary);


	return 0;
}