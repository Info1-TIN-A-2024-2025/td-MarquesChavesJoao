#include <stdint.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
	float a = 0;
	double b = 0;
	long double c = 0;

	char d = 0;
	unsigned char e = 0;
	short f = 0;
	unsigned short g = 0;
	long h = 0;
	unsigned long i = 0;
	long long j = 0;
	unsigned long long k = 0;

	int l = 0;
	unsigned int m = 0;

	int8_t n = 0;
	uint8_t o = 0;

	o = 42;
	printf("o = %d \n", o);

	o = 0b101010;
	printf("o = %d \n", o);

	o = 052;
	printf("o = %d \n", o);

	o = 0x2A;
	printf("o = %d \n", o);

	printf("o = %b \n", o);
	printf("o = %o \n", o);
	printf("o = %x \n", o);
	printf("o = %X \n", o);
	return 0;
}