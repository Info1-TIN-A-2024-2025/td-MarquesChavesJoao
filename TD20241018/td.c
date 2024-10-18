#include <stdio.h>
#include <stdlib.h> // Pour atoi
int main(int argc, const char *argv[])
{
    //display the value of argc
    printf("argc =%d\n",argc);
    // ./app                    : 1
    // ./app 10 20              : 3
    // ./app toto titi          : 3
    // ./app Albert Einstein    : 3
    // ./app "Alber Einstein"   : 2
    // ./app 3.14 2.7189 9      : 4
 
    //première étape : verifier le nombre d'argument
    //exemple labo3 doit avoir 3 arguments ex: ./app 10 20
   
    /*if(argc !=3)
    {
        printf("Erreur, mauvais nombre d'arguments\n");
        return 1;
    }
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);
    printf("argv[2] = %s\n", argv[2]);
   
    int i =0;
    double x = 0;
 
    i = atoi(argv[1]);
    x = atof(argv[2]);
    printf("I = %d, x = %f\n",i,x);
 
    int i = 42;
    printf("i = %d\n",i);
    i++;    //equivalent de i = i +1
    printf("i = %d\n",i);*/
 
    int i = 57;
    printf("i = %d\n",i);   //57
    int j = 0;
    j=i++;  //post incrémentation
    printf("j = %d\n",j);   //58
    printf("i = %d\n",i);   //58
 
    puts("______________________");
 
    i = 57;
    printf("i = %d\n",i);   //57
    j = 0;
    j=++i;  //pre incrémentation
    printf("j = %d\n",j);   //58
    printf("i = %d\n",i);   //58
 
    return 0;
}
 