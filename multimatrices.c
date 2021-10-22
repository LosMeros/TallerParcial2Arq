// Universidad Sergio Arboleda

// Arquitectura de Computadores

// Taller Parcial 2

// Profesor: Jhon corredor

// Samuel Medina y Rober Burgos

// Seccion 6: Multiplicacion de dos matrices

// En el presente ejercicio se multiplicaran dos matrices.

#include <stdio.h>

int main(){
//Se crean las variables y las matrices para el programa 
 int mA[2][2], mB[2][2], mC[2][2]; 
 int a, b;
//Se saluda al usuario
printf("BIENVENIDO AL PROGRAMA\n\n");
printf("MULTIPLICACION DE MATRICES \n\n");
//Se desarrollan las operaciones 
printf("Matriz A:\n\n");
for(a=1;a<=2; a++){
    for(b=1; b<=3; b++){
        printf("Digite el valor de la matriz a [%d] [%d]: \n", a, b);
        scanf("%d", &mA[a][b]);
    }
}

printf("Matriz B: \n\n");
for(a=1;a<=3; a++){
    for(b=1; b<=3; b++){
        printf("Digite el valor de la matriz b [%d] [%d]: \n", a, b);
        scanf("%d", &mB[a][b]);
    }
}

for(a=1;a<=2; a++){
    for(b=1; b<=3; b++){
        mC[a][b]=(mA[1][b]* mB[1][b])+ (mA[a][2]*mB[2][b])+(mA[a][3]*mB[3][b]);
    }
}

printf("La multiplicaion es: \n");
for(a=1;a<=2; a++){
    for(b=1; b<=3; b++)
        printf("%d\t", mC[a][b]);
    printf("\n");
    
}
//Finaliza el programa
printf("Programa finalizado \n");
printf("\n");
return 0;
}
