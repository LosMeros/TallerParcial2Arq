// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Profesor: Jhon corredor

// Samuel Medina y Rober Burgos

// Seccion 5: Contar elementos repetidos en un arreglo.

// En el presente ejercicio se contara los elementos repetdios de un arreglo

#include <stdio.h>

int main(){
//Se crean las variables principales
int a1[50];
int ubi = 0;
int i = 0;
int c = 0;
int n = 0;
//Se le pide al usuario un dato 
printf("Bienvenido al programa\n\n");
printf("Ingrese numero para el arreglo:  \n");
scanf("%i", &n);
//Se desarrollan las operaciones debidas
for (i = 0; i<n; i++){

    printf("Digite numero del arreglo: \n", i + 1);
    scanf("%i", &a1[i]);
}
printf("Que elemento del arreglo quiere contar: \n");
scanf("%i", &ubi);
for (i=0; i<n;i++){
if (a1[i]==ubi)
c++;
}
if (c!=0){
    printf("EL elemento esta %i veces \n", ubi, c);
}else{
    printf("El elemento %i no es valido \n \n", ubi);
}
//El programa finaliza
printf("Programa finalizado\n");


    return 0;
}
