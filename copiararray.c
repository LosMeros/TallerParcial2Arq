// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Profesor: Jhon corredor

// Samuel Medina y Rober Burgos

// Seccion 5: Copiar los elementos de un array a otro array.

// En el presente ejercicio se copiara todos los elementos de una arreglo a otro arreglo.

#include <stdio.h>
//Se crea la funcion para el programa
void ca(int a[], int b[], int espacio){


        for (int i = 0; i <espacio; i++){
            b[i] = a [i];
        }
        for (int i = 0; i <espacio; i ++){
            printf("%i", b[i]);
        }
    }

int main (){
//Se crean las variables y arreglos 
//Se imprime la respuesta
    int a1[10] = {1,1,2,2,3,3,4,4,5,5};
    int a2[10];
    void ca(int a[], int b[], int espacio);
    printf("Bienvenido!!!!!! \n \n");
    printf("COPIA DE ARREGLOS \n \n");
    ca(a1,a2,10);
//Finaliza el programa
printf("Gracias por utilizar el programa. \n");
    return 0;
}
//Otra funcion para el programa
void ca(int a[], int b[], int espacio);
