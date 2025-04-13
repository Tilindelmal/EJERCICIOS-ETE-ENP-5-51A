/*Pida tres calificaciones, asegúrese de que el valor se encuentre entre 0.0 y
10.0 y escriba el promedio obtenido con máximo un decimal. Ejemplo
(“Promedio 9.2”). */

#include <stdio.h>

int main() {
    /*Inicializamos un arreglo  de tipo flotante local unidimensional de tres elementos para evitar variables
     *repetidas y compactarlo en un solo arreglo*/
    float calificaciones[3];
    //Inicializamos una variable local de tipo flotante para almacenar ahi los datos sumados y hacer la division
    float promedio;
    //Inicializamos un ciclo for para recorrer y llenar los datos del arreglo
    for (int i = 0; i < 3; i++) {
        //Pedimos los datos al usuario de sus tres calificaciones parciales
        printf("Digite las calificaciones %i parcial: ", i + 1);
        //Recibimos las tres calificaciones del usuario y almacenamos en el arreglo
        scanf("%f", &calificaciones[i]);
        //Entramos a un filtro que verifica que las calificaciones se encuentren de un rango de 0-10
        if (calificaciones[i] < 0 || calificaciones[i] > 10) {
            printf("Elija un rango de 0-10!!!");
            return 1;
        }
        //En la variable promedio sumamos los datos i veces (3 veces)
        promedio += calificaciones[i];
    }
    //Ahora dividimos el valor de la varible entre tres
    promedio /= 3;
    //Mostramos la salida que es el promedio con solo un decimal
    printf("Su promedio es de %.1f", promedio);

    return 0;
}
