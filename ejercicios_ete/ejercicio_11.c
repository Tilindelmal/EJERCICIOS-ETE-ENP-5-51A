/*Elabore una lista de 20 números aleatorios e imprima su sumatoria. (utilizar la
función ‘rand () % numeromáximo’, dónde número máximo es el límite de los
aleatorios, ejemplo rand() % 11 -> devuelve números aleatorios entre 0 y */

#include <stdio.h>
#include <stdlib.h> //Incluimos la libreria donde vendra la funcion de rand(); y srand();
#include <time.h> /*Incluimos la libreria para cambiar la semilla por defecto y nos de valores aleatorios diferentes
y no repetidos
*/

int main() {
    //inicializamos variables locales de tipo entero donde se guardaran los resultados posteriores
    int suma = 0, numero;
    //Mensaje para el usuario
    srand(time(NULL)); // Establece una semilla aleatoria una sola vez al inicio del programa
    printf("Este programa suma 20 numeros aleatorios!!!\n");
    //Inicializamos un ciclo for para sumar los 20 numeros aleatorios de un rango de 0-10
    for (int i = 0; i < 20; i++) {
        numero = rand() % 11; //En la variable número guardaremos el resultado de la funcion aleatoria
        printf("El numero %i es %i\n", i+1,numero); //Imprimimos en que numero vamos y el valor del numero
        suma += numero; //Variable acumuladora donde se guardara la sumatoria de todos los numeros aleatorios
    }

    printf("La sumatoria de los 20 numeros aleatorios es %i \n", suma); /*Muestra la sumatoria de los 20
    numeros aleatorios de 0 a 10*/
    return 0;
}
