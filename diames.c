// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Profesor: Jhon corredor

// Samuel Medina y Rober Burgos

// Seccion 4: Imprimir el numero de dias de un mes usando switch case.

// En le presente ejercicio desarrollaremos un programa que utilize una estructura switch case e imprima el numero de dias de un mes.

#include <stdio.h>

int main(){
//Se crea la variable principal
int dias;
//Se le pide al usuario ingresar los datos requeridos
printf("Bienvenido \n \n");

printf("Escriba un numero del 1 al 12 para saber que mes es, y cuantos dias tiene:");

scanf("%i", &dias);
//Se desarrollan las operaciones necesarias
switch (dias)
{
case 1: printf(" 1 = Enero tiene 31 dias \n");
    break;

case 2: printf(" 2 = Febrero tiene 28 dias \n");
    break;

case 3: printf(" 3 = Marzo tiene 31 dias \n");
    break;

case 4: printf(" 4 = Abril tiene 30 dias \n");
    break;

case 5: printf(" 5 = Mayo tiene 31 dias \n");
    break;

case 6: printf(" 6 = Junio tiene 30 dias \n");
    break;

case 7: printf(" 7 = Julio tiene 31 dias \n");
    break;

case 8: printf(" 8 = Agosto tiene 31 dias \n");
    break;

case 9: printf(" 9 = Septiembre tiene 30 dias \n");
    break;

case 10: printf(" 10 = Octubre tiene 31 dias \n");
    break;

case 11: printf(" 11 = Noviembre tiene 30 dias \n");
    break;

case 12: printf(" 12 = Diciembre tiene 31 dias \n");
    break;
//Si hay algun error, sale en la pantalla de ejecucion
default:printf("Numero incorrecto. \n \n");
    break;
}
//Finaliza el programa

printf("Gracias por utilizar el programa. Feiz mes. \n \n");

return 0;

}
