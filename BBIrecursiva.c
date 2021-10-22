// Universidad Sergio Arboleda

// Arquitectura de Computadores 

// Taller Parcial 2

// Samuel Medina y Rober Burgos

// Profesor: Jhon Corredor

// Seccion 13: Busqueda Binaria Recursiva 

// En el presente ejercicio se hara un programa de busqueda binaria con recursividad

#include <stdio.h>
#define TAMANIO 15
//Se inicializan las funciones
int bBinaria( const int b[], int busquedan, int bajo, int alto );
void titulo( void );
void Linea( const int b[], int bajo, int medio, int alto );


int main() {
    //Se inicializan las variables 
    int a[ TAMANIO ]; 
    int i; 
    int llave; 
    int resultado; 

printf("Bienvenido\n\n");
   //Se desarrollan las operaciones para que el usuario ingrese los valores que requiera
    for ( i = 0; i < TAMANIO; i++ ) {
        a[ i ] = 2 * i;
    } 

    printf( "Ingrese un numero entre 0 y 28: " );
    scanf( "%d", &llave );
    titulo();
   
    resultado = bBinaria( a, llave, 0, TAMANIO - 1 );

//Se imprime la respuesta y si existe algun error, sale en la pantalla de ejecucion.
    if ( resultado != -1 ) {
        printf( "\n%d se encuentra en el elemento %d de la lista. \n", llave, resultado );
    } 
    else {
        printf( "\n%d no se encuentra\n", llave );
    } 

    return 0; 

} 

int bBinaria( const int b[], int busquedan, int bajo, int alto ) {
    int central = ( bajo + alto ) / 2;
    Linea( b, bajo, central, alto );


    if ( bajo > alto ) {
        printf("\ncentral = %d", central);
        return -1;
    }

    if ( busquedan == b[ central ] ) {
        printf("\ncentral = %d", central);
        return central;
    }

    if ( busquedan < b[ central ] ) {
        return bBinaria( b, busquedan, bajo, central - 1 );
    }

    if(busquedan > b[central] ) {
        return bBinaria (b, busquedan, central + 1, alto);
    }

} 


void titulo( void ) {
    int i; 

    printf( "\nSubindices:\n" );

    
    for ( i = 0; i < TAMANIO; i++ ) {
        printf( "%3d ", i );
    } 

    printf( "\n" ); 

    
    for ( i = 1; i <= 4 * TAMANIO; i++ ) {
        printf( "-" );
    } 

    printf( "\n" ); 
} 


void Linea( const int b[], int baj, int cen, int alt ) {
    int i; 

    
    for ( i = 0; i < TAMANIO; i++ ) {

        
        if ( i < baj || i > alt ) {
            printf( "    " );
        } 
        else if ( i == cen ) { 
            printf( "%3d*", b[ i ] ); 
        } 
        else { 
            printf( "%3d ", b[ i ] );
        } 

    } printf("\n");
    
}

    
