// Universidad Sergio Arboleda

// Arquitectura de computadores

// Taller Parcial 2

// Samuel Medina y Rober Burgos

// Profesor Jhon Corredor

// Seccion 1: Ejercicio Area de triangulo.

// En el presente ejercicio se encontrara el area de un triangulo.

#include <stdio.h>

int main(){


//Se inicializan las variables.


    float Base;
    float altura;
    float area;

//Se pide al usuario que digite los numeros para la base y altura.


printf("Bienvenido al ejercicio de area del triangulo  \n" );

printf("Ingrese la base del triangulo:  \n" );
scanf("%f", &Base);

printf("Ingrese altura del triangulo:   \n"  );
scanf("%f", &altura);

//Se hacen las operaciones correspondientes.

area=((Base)*(altura))/2;


//Se imprime la respuesta.

printf("El area del triangulo es: %f \n", area);


    return 0;
}


