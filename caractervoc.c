// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Samuel Medina y Rober Burgos

// Profesor: Jhon Corredor

// Seccion 2: Caracter vocal o consonante.

// El presente ejercicio debe imprimir si el caracter ingresado por el usuario es una vocal o una consonante.

#include <stdio.h>

int main(){
//Se crea la variable para el programa
    char LetraA; 
//Se le pide al usuario los datos para la ejecucion del programa
    printf("Bienvenido \n \n");

    printf("Ingrese una letra para saber si es vocal o consonante:  \n");
    scanf("%s", &LetraA);
//Se crean las operaciones y ademas se imprime la respuesta o el error
    if(LetraA == 'a' || LetraA == 'e' || LetraA == 'i' || LetraA == 'o' || LetraA == 'u' ){

        printf("La letra ingresada es una voval \n");

    }
    else{

        printf("La letra ingresada es consonante \n");
    }

    printf(" \n \n Gracias por utilizar el programa. \n \n");


//Finaliza el programa
    return 0;
}
