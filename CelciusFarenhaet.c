// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Samuel Medina y Rober Burgos

// Seccion 1: Calcular de grados Celcius a Farenheit

// En el presente ejercicio se hara el calculo de Celcius a Farenheit.


#include <stdio.h>


int main(){

//Se inicilizan las variables.

float DatoC;
float DatoF;

//Se pide al usuario que introduzca los datos requeridos.

printf("++Bienvenido al programa que convierte de celcius a farenheit++  \n");

printf("Ingrese grados celcius: \n");
scanf("%f",    &DatoC);

//Se realizan las operaciones correspondientes.

DatoF = ((9*DatoC)/5) + 32;


//Se imprime el resultado.
printf("Grados Farenheit:  %f \n",  DatoF);


    return 0;
}
