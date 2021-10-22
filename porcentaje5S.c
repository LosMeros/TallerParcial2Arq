// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Samuel Medina y Rober Burgos

// Profesor: Jhon Corredor

// Seccion 1: Porcentaje de 5 sujetos.

// En el presente ejercicio se obtendra el porcentaje de 5 sujetos.

#include <stdio.h>

int main(){

//Se inicializan las variables

    int S1;
    int S2;
    int S3;
    int S4;
    int S5;
    int porcentaje;

//Se saluda al usuario.

    printf("BIENVENIDO   \n");

//Se piden los datos al usuario y alaves se hacen las operaciones para que salga de una vez el resultado. 

    printf("Digite un el numero del sujeto 1: \n");
    scanf("%i",  &S1);

    porcentaje= S1*100;
    printf("El porcentaje del sujeto 1 es: %i Porciento \n", porcentaje );

    printf("Digite un el numero del sujeto 2: \n");
    scanf("%i",  &S2);

    porcentaje= S2*100;
    printf("El porcentaje del sujeto 2 es: %i Porciento \n", porcentaje );

    printf("Digite un el numero del sujeto 3: \n");
    scanf("%i",  &S3);

    porcentaje= S3*100;
    printf("El porcentaje del sujeto 3 es: %i Porciento \n", porcentaje );

    printf("Digite un el numero del sujeto 4: \n");
    scanf("%i",  &S4);

    porcentaje= S4*100;
    printf("El porcentaje del sujeto 4 es: %i Porciento  \n", porcentaje );

    printf("Digite un el numero del sujeto 5: \n");
    scanf("%i",  &S5);

    porcentaje= S5*100;
    printf("El porcentaje del sujeto 5 es: %i Porciento \n", porcentaje );



    return 0;
}
