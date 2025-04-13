/*Crear un arreglo de 50 números aleatorios, utilizar la función: ‘rand() %
numero’. */

#include <stdio.h>
#include <stdlib.h>//Libreria para incluir la funcion random
#include <time.h>//Libreria para cambiar la semilla y evitar repeticion numerica

int main() {
    int arreglo[50] = {0};//Inicializamos el arreglo para evitar que tenga basura
    srand(time(NULL));//Cambiamos la semilla para evitar numero repetidos
    //Anidamos el ciclo for para rellenar el arreglo con numeros aleatorios del 1-10
    for (int i = 0; i < 50; i++) {
        arreglo[i] = rand() % 11;
        printf("%i.-%i\n", i + 1, arreglo[i]);//Mostramos los numeros introducidos al array
    }
    return 0;
}