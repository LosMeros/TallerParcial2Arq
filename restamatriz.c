// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Profesor: Jhon Corredor

// Samuel Medina y Rober Burgos

// Seccion 6: Resta de dos matrices.

// En el presente ejercicio se restaran dos matrices.

#include<stdio.h>

int main(){
    //Se crean las variables principales para el programa
    float A1, A2, A3, A4;               
    float B1, B2, B3, B4;                       
    float restaA, restaB, restaC, restaD;       
    float productoA, productoB, productoC, productoD; 
    //Se saluda al usuario
    printf("BIENVENIDO\n\n");
    printf("RESTA DE MATRICES \n\n");
    //Se le pide al usuario los datos requeridos
    printf("Digite la  matriz A: \n");
    scanf("%f %f %f %f", &A1, &A2, &A3, &A4);
    
    printf("Digite la matriz B: \n");
    scanf("%f %f %f %f", &B1, &B2, &B3, &B4);
     //Se crean las operaciones
    restaA = A1 - B1;
    restaB = A2 - B2;
    restaC = A3 - B3;
    restaD = A4 - B4;
    
    productoA = A1*B1 + A2*B3;
    productoB = A1*B2 + A2*B4;
    productoC = A3*B1 + A4*B2;
    productoD = A3*B3 + A4*B4;
    
    printf("\nLa matriz resta::\n");
    printf("(resta11 = %f resta12 = %f)\n(resta21 = %f resta22 = %f)",
         restaA, restaB, restaC, restaD);

    printf("\nLa matriz resultado:\n");
    printf("(producto11 = %f producto12 = %f)\n(producto21 = %f producto22 = %f)",
         productoA, productoB, productoC, productoD);
//Finaliza el programa
    printf("\nPrograma finalizado.\n");
}
