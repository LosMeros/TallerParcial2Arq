// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Profesor: Jhon corredor

// Samuel Medina y Rober Burgos

// Seccion 4: Imprimir un dia de la semana usando switch case

// En el presente ejercicio se hara un programa que imprima un dia a la semana usando la estructura switch case

#include <stdio.h>

int main(){
//Se crea la variable
int num;

printf("Bienvenido\n\n");
//Se le pide al usuario los datos necesarios
printf("Ingrese un numero del 1 al 7 para averiguar el dia de la semana:\n");

printf("1 = ***\n");
printf("2 = ***\n");
printf("3 = ***\n");
printf("4 = ***\n");
printf("5 = ***\n");
printf("6 = ***\n");
printf("7 = ***\n");

scanf("%i", &num);
//Se crean las operaciones usando el switch 
switch (num)
{
case 1: printf(" Dia Lunes \n");
    break;

case 2: printf(" Dia Martes \n");
    break;

case 3: printf(" Dia Miercoles \n");
    break;

case 4: printf("Dia Jueves \n");
    break;

case 5: printf(" Dia Viernes \n");
    break;

case 6: printf("Dia Sabado \n");
    break;

case 7: printf(" Dia Domingo \n");
    break;
//Si hay algun error, se imprime en la pantalla 
default:printf("Dia no valido \n");
    break;
}
// Finaliza el programa
    printf("GRACIAS POR UTILIZAR EL PROGRAMA, FELIZ DIA. \n\n");
    return 0;
}
