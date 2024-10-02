#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	//definition variable
	double U = 0; //tension
	double R = 0; //resistance
	double I = 0; //courant

	//recuperation de la tension et du courant
    printf("Entrez la valeur de la tension [V]: ");
    scanf("%lf", &U);

	printf("Entrez la valeur de la resistance [Ω]: ");
    scanf("%lf", &R);

	if(R>0)
	{
		I = U / R; // loin d'hom
		printf("Courant est de %.3E [A] \r\n",I); // affciher la valeur du courant
	}else
	{
		printf("ERREUR \r\n"); // erreur de valeur de resistance
		return 1;
	}

	return 0;
}
