
#include <stdio.h>


int factorial (int n) {


    int i=1;


    while (n>1) {
        i=i*n;
        n=n-1;
    }


    return i;
}




int main (){

    int n ;

    printf("Ingrese el numero del que desea calcular su factorial: ") ;

    scanf("%d", & n) ;

    int fac=factorial(n) ;

    printf("El factorial del numero ingresado es: %d! = %d\n", n,fac);

    return 0 ;

}



