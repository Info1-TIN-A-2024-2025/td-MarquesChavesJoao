#include <stdint.h>
#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int n = 1000;
	unsigned char count = 0;

    if (n == 0) {
        count = 1;
    } else {
        count = log10(n) + 1;
    }

    printf("Nombre de chiffres: %d\n", count);
	return 0;
}