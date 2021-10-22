// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Profesor: Jhon Corredor 

// Samuel Medina y Rober Burgos

// Seccion 5: Buscar un elemento en un arreglo

// En el presente ejercicio se hara un programa para buscar un elemto dentro de un arreglo.

#include <stdio.h>

int main(){

printf("HOLA\n \n");
//Se inicializan las variables necesarias para el programa
    int A;
    char a1[20][100]={1,2,3,4,5,6,7,8,9,};
    int valor[]={11,21,31,41,51,61,};
    int con=valor[0], cona=0;
    //Se desarrolan las operaciones para vuscar el arreglo
    for (A=0;A<=4;A++)
    if(valor[A]<con){
        con=valor[A];
        cona=A;
    }
    //Se imprime la respuesta
printf("El elemento requerido es %i, y esta en la ubicacion %d \n", a1[cona], cona);



    return 0;
}
