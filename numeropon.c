// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Samuel Medina y Rober Burgos

// Profesor: JHon Corredor

// Seccion 2: Numero positivo o negativo

// En el presente ejercicio se sabra si un numero es negativo o positivo utilizando las estructuras If/Else.

#include <stdio.h>

int main(){
//Se crea la varible entera principal
    int numA;
//Se saluda al usuario
    printf("Bienvenido al programa  \n");
//Se le pide un dato al usuario 
    printf("Digite un numero para saber si es negativo o positivo: \n");
    scanf("%i", &numA);
//Se crean las operaciones
    if(numA >= 0){

        printf("El numero digitado es positivo \n");
    }
    else{

        printf("El numero ingresado es negativo \n");
    }
//Finaliza el programa
    printf("Gracias por utilizar el programa.  \n");


    return 0;
}
