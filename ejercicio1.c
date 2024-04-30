
#include <stdio.h>

int main(){

    int numeroT=0 ;

    printf("La lista de los primeros 100 numeros triangulares es: ");

    for (int i=1; i<=100; i++)
    {
        numeroT +=i;

        printf("%d, ", numeroT);
    }


    return 0;

}




