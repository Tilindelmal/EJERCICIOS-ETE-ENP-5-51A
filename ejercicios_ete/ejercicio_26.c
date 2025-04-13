/*Escribir un programa (en lenguaje C) que:
1º) Pida por teclado un número (dato entero).
2º) Repita el paso 1º, mientras que, el número introducido sea distinto de
cero.
3º) Muestre cuántos números mayores que cero han sido introducidos por
el usuario, así como, la suma de todos ellos.*/

#include <stdio.h>

//Estructura que contiene las variables globales donde se guardaran los numeros de entrada, sumatoria y repeticion
struct mayores {
    int numeros;
    int sumatoria;
    int repeticiones;
}admin;

int main() {
    //Entramos a un do donde se repetira mientras sea distinto que cero jaja
    do {
        printf("Digite un numero: ");
        //Leemos un valor de entrada que se guardara con un puntero a una variable global entera
        scanf("%i", &admin.numeros);
        if (admin.numeros > 0) {
            admin.sumatoria += admin.numeros; //La sumatoria de todos los numeros mayores que 0
            admin.repeticiones++; //No hace falta decir que hace esta variable xd, pista(aumenta de uno en uno)
        }
    }while (admin.numeros != 0);//Condicion evaluada
    //Mostramos los numeros mayores que cero y su sumatoria XD
    printf("Ha introducido %i numero(s) mayor(es) que cero.\nLa suma es de %i", admin.repeticiones, admin.sumatoria);

    return 0;
}