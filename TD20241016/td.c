#include <stdint.h>
#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int n = 42;
	unsigned char count = 0;
	float alpha = 60;
	float result;
	count = (int)log10(n) + 1;
	printf("Nombre de digit (base 10): %d\n", count);

    count = (int)log2(n) + 1;
    printf("Nombre de digit (base 2 ): %d\n", count);

	count = (int)(log10(n)/log10(16))+1;
    printf("Nombre de digit (base 16): %d\n", count);

 	alpha = alpha * M_PI / 180.0;

	result = sin(alpha);
    printf("sin alpha : %.6f\n", result);

	result = cos(alpha);
    printf("cos alpha : %.6f\n", result);

	result = tan(alpha);
    printf("tan alpha : %.6f\n", result);

	result = sin(alpha)/cos(alpha);
    printf("tan alpha : %.6f\n", result);

	result = tan(alpha)-(sin(alpha)/cos(alpha));
    printf("tan alpha : %.10E\n", result);
	return 0;
}