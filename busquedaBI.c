// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2 

// Samuel Medina y Rober Burgos

// Profesor: Jhon Corredor

// Seccion 13: Busqueda binaria

// En el presente ejercicio se desarrollara una busqueda binaria.

#include<stdio.h>

int main(){
//Se inicializan las variables 
  int A, ubi, m1;
  int arreglo[100]; 
  int a = 0;
  int b = 100;
  int cA = 0;
  int cB = 0;

  printf("Bienvenido al programa:\n\n");

  printf("Lista de numeros: \n\n");
  //Se ponen las operaciones para la correcta ejecucion del programa
  for( A=0; A<=100; A++){
    arreglo[A] = A*2;
  }


  for(A=0;A<=100;A++){
    printf("%d  ", arreglo[A]);
    if( A % 10 == 0 && A != 0)
      printf("\n");
  }
  printf("\n\nContinue\n\n");

  printf("Digite  un numero para buscarlo en la lista: \n ");
  scanf("%d", &ubi);
//Se imprime la respuesta
  while (a <= b){
    cA++;
    m1 = (a + b) / 2;

    if(ubi > 200){
      printf("El numero no esta en la lista\n");
      break;
    }

    if(ubi == arreglo[m1]){
      printf("Numero %d encontrado en posicion %d\n", arreglo[m1], m1);
      break;
    }
    else if(ubi < arreglo[m1]){
      b = m1 -1;
    }
    else{
      a = m1 + 1;
    }
    cB++;

  }
//Si hay algun error sale lo siguiente en la pantalla de ejecucion
if(cA == cB){
  printf("El numero no esta en la lista\n");
}

return 0;

}


