// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Samuel Medina y Rober Burgos

// Profesor: Jhon Corredor

// Seccion 3: Calcular suma de numeros naturales

// En el presente ejercicio se utilizara la estrucutra While - Do para calcular la suma de numeros naturales

#include <stdio.h>

int main(){
//Se definen las variables correspondientes 
int repet;
int A;
int ope=0;

printf("Bienvenido \n \n");
//Se le pide al usuario un dato
printf("Ingrese el numero: \n");
scanf("%i", &A);
//Se crean las operaciones 
repet = 1;
while(repet <= A){

ope = ope + repet;
repet++;

}

    printf("La suma es: %i  \n \n", ope);
//Finaliza el programa
    printf("Gracias por utilizar el programa \n");


    return 0;
}
