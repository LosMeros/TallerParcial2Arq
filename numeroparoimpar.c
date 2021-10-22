// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Samuel Medina y Rober Burgos

// Profesor: Jhon Corredor

// Seccion 2: Numero Par o Impar

// El presente ejercicio debe mosrar si el numero ingresado por el usuario es par o impar, utilizando la estructura If/Else.

#include <stdio.h>

int main(){

//Se desarrolla la variable principal
    int numA;

    printf("Bienvenido al programa  \n  \n");
//Se le pide al usuario que ingrese un valor
    printf("Ingrese un numero para saber si es par o impar:  \n");
    scanf("%i",  &numA);
//Se crean las operaciones 
    if(numA %2 == 0){

        printf("El numero ingresado es par  \n");
    }
    else{

        printf("El numero ingresado es impar  \n");
    }

    printf("Gracias por utilizar el programa  \n");


    return 0;
}

