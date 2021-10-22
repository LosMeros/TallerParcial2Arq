// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2 

// Samuel Medina y Rober Burgos

// Profesor: Jhon Corredor

// Seccion 3: Imprimir tabla de multiplicar 

// En el presente ejercicio se imprime la tabla de multiplicar de un numero.

#include <stdio.h>

int main(){
//Se le da la bienvenida al usuario y se le piden los datos correspondientes
    printf("BIENVENIDO AL PROGRAMA \n \n");
    printf("A continuacion la tabla de multiplicar de un numero \n \n");
//Se definen las varibles correctas
int numa=1;
int numb=1;
numa=1;
//Se definen las operaciones
do{

printf("Ingrese un numero: \n");
scanf("%i", &numa);

numb=1;
do{
    printf("%i x %i = %i\n", numa, numb, numa*numb);
    numb++;
}
while(numb <21);
numa++;

}while(numa < 21);
//Se finaliza el programa
printf("\nPROGRAMA FINALIZADO\n");


return 0;

}
