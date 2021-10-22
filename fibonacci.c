// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Samuel Medina y Rober Burgos

// Profesor: Jhon Corredor

// Seccion 3: Mostrar serie fibonacci

// En el presente ejercicio se debe presentar la serie fibonacci utilizando la estructura de bucle do - while

#include <stdio.h>

int main(){

//Se saluda al usuario y se le pide un dato
    printf("Bienvenido \n\n");
    printf("Serie fibonacci // Ingrese Numero: \n");
//Se inicializan las variables adecuadas 
    int numa=1;
    int numb=1;
    int numc =0;
    int numd=1;
    int num=0;

    scanf("%i", &num);
    do{
//Se desarrollan las operaciones 
        printf("%i", numa);
        numd++;
        numc=numa+numb;
        numa=numb;
        numb=numc;
    }while (numd<=num);
//Finaliza el programa
    printf("\nGRACIAS POR UTILIZAR EL PROGRAMA \n");

    printf("\n");

    return 0;
}
