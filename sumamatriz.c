// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Profesor: Jhon Corredor

// Samuel Medina y Rober Burgos

// Seccion 6: Suma de dos matrices

// En el ejercicio se va a desarrollar la suma de dos matrices.
 
#include <stdio.h>
#define F 5
#define C 5
 //Se define el tamaño de la matriz
int main(){
 //Se definen los valores de las varibles
int mA[F][C];
int mB[F][C];
int mC[F][C];
int a;
int b;

int k;
int l;
//Se saluda al usuario
printf("Bienvenido al programa\n\n");
 //Se le presenta al usuario el programa y se le pide los dats
printf("Se sumaran dos matrices de %ix%i. Ingrese los valores de las matrices:\n\n", F, C);
 //Se crean las operaciones
for( a=0; a<F; a++ ){
for( b=0; b<C; b++ ){
mA[a][b] = 0;
mB[a][b] = 0;
         }
}
 
 
 
for( a=0; a<F; a++ ){ 
 
for( b=0; b<C; b++ ){ 
 

scanf( "%i", &mA[a][b] );
 
printf( "Primera matriz\n");
for( k=0; k<F; k++ ){
 
for( l=0; l<C; l++ ){
printf( " %i ", mA[k][l] );
         }
 
printf( "\n");
     } 
 
  }
 
}

 
 
printf( "Segunda matriz\n");
for( a=0; a<F; a++ ){
 
for( b=0; b<C; b++ ){
 

scanf( "%i", &mB[a][b] );
 
 
 
printf( "Segunda matriz\n");
for( k=0; k<F; k++ ){
 
for( l=0; l<C; l++ ){
printf( " %i ", mB[k][l] );
                }
 
printf("\n");
             }
 
          }  
} 
 
 
 
 
for( a=0; a<F; a++ ){
 
for( b=0; b<C; b++ ){
mC[a][b] = mA[a][b] + mB[a][b];
        }       
 
} 
 
 
printf( "Matriz B   +   Matriz A   =   Matriz resultado\n");
for( a=0; a<F; a++ ){
 
printf(" ");
for( b=0; b<C; b++ ){
printf( " %i ", mA[a][b] );
            }
printf( "         ");
for( b=0; b<C; b++ ){
printf( " %i ", mB[a][b] );
            }
printf( "          ");
for( b=0; b<C; b++ ){
printf( " %i ", mC[a][b] );
                 } 
printf( "\n");
       }
 
 
}
