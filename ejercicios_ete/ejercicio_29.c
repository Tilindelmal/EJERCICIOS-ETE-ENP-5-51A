/*Crear un programa con gráficos que muestre figuras de tamaños aleatorios.
*/
#include <stdio.h>
#include <stdlib.h>//Libreria para incluir la funcion random
#include <time.h>//Libreria para cambiar la semilla y evitar repeticion numerica

void dibujarCuadrado(int tam);

void dibujarTriangulo(int tam);

int main() {
    srand(time(NULL));//Semilla aleatoria
    //Variable local tipo entera que no hace falta decir que hace xd
    int cantidad = 5 + rand() % 6; // Dibuja entre 5 y 10 figuras

    for (int i = 0; i < cantidad; i++) {
        int figura = rand() % 2; // 0 para cuadrado, 1 para triángulo
        int tam = 2 + rand() % 5; // Tamaño entre 2 y 6
        //Mostramos las figuras xd
        printf("Figura %i: %s de tamaño %i\n", i + 1, figura == 0 ? "Cuadrado" : "Triángulo", tam);
        if (figura == 0) {
            dibujarCuadrado(tam);
        } else {
            dibujarTriangulo(tam);
        }
    }

    return 0;
}
//Funciones para dibujar en la consola xd
void dibujarCuadrado(int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

void dibujarTriangulo(int tam) {
    for (int i = 1; i <= tam; i++) {
        for (int j = 0; j < i; j++) {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n");
}
