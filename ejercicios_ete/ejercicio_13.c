/*Hacer un programa que lea tres valores y me indique cual es el mayor de los
tres. */

#include <stdio.h>

int main() {
    /*Para evitar poner tres variables locales de tipo entero inicialize un arreglo unidimensional de 3 enteros*/
    int numero[3];

    for (int i = 0; i < 3; i++) {//Con un ciclo for rellenamos el arreglo e indicamos en que posición del arreglo vamos
        printf("Ingrese el %i numero: ", i + 1);
        scanf("%i", &numero[i]);
    }
    for (int i = 0; i < 3; i++) {//Con un ciclo for mostramos los valores del arreglo
        printf("Los valores ingresados fueron: %i\n", numero[i]);
    }
    if (numero[0] > numero[1] && numero[0] > numero[2]) {//Con una sentencia if evaluamos si el 1er numero es el mayor
        printf("El numero %i es el mayor de los tres numeros!!!\n", numero[0]);
    } else if (numero[1] > numero[0] && numero[1] > numero[2]) {//Con un else-if evaluamos si el 2do numero es el mayor
        printf("El numero %i es el mayor de los tres numeros!!!\n", numero[1]);
    } else {//Como ya abarcamos los dos primeros casis de los tres por descarte con un else el tercero es el mayor
        printf("El numero %i es el mayor de los tres numeros!!!\n", numero[2]);
    }

    return 0;
}
