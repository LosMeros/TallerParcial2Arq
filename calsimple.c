// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Profesor: Jhon corredor

// Samuel Medina y Rober Burgos

// Seccion 4: Crear una calculador simple con el switch case

// En el presente ejercicio se creara una calculadora simple usando el switch case.

#include<stdio.h>

int main(){
//Se crean las variables para el ejercicio
    float nA, nB, res;
    int menu;
//Se saluda al usuario y se pide los datos necesarios
    printf("BIENVENIDO \n\n");

    printf("Calcualdora simple\n\n");

    printf("Digite numero: \n");

    scanf("%f", &nA);

    printf("Digite numero: \n");

    scanf("%f", &nB);

    printf("MENU DE CALCULADORA:\n");

   printf("1 Suma \n");
    printf("2 Resta \n");
     printf("3 Division \n");
      printf("4 Multiplicacion \n");
      scanf("%i", &menu);

//Se crean las operaciones correspondientes para crear la calculadora
    switch (menu)
    {
    case 1:res = nA + nB;
        break;

    case 2:res = nA - nB;
        break;

    case 3:res = nA / nB;
        break;

    case 4:res = nA * nB;
        break;
    
    default: printf("El numero que ingreso no es valido \n");
        break;
    }
//Se imprime el resultado
printf("Resultado: %f \n", res);

    return 0;
}
