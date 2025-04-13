/*Hacer un programa que lea tres valores y los ordene de menor a mayor y si
hay valores iguales indique cuales son*/

#include <stdio.h>

void ordenar(int a, int b, int c);//Ponemos la funcion al principio para que el compiladores la indentifique

int main() {
    /*Para evitar poner tres variables locales de tipo entero inicialize un arreglo unidimensional de 3 enteros*/
    int numeros[3];
    //Mensaje de entrada
    printf("\nEste programa evalua cual de los tres numeros en mayor :D!!!\n");
    //Con un ciclo for rellenamos el arreglo e indicamos en que posición del arreglo vamos
    for (int i = 0; i < 3; i++) {
        printf("Digite el %i numero: ", i + 1);
        scanf("%i", &numeros[i]);
    }
    //Con un ciclo for mostramos los valores del arreglo
    for (int i = 0; i < 3; i++) {
        printf("El %i numero ingresado es: %i\n", i + 1, numeros[i]);
    }
    //Entramos a la funcion que ordena nueatro numeros de mayor a menor y detecta si son iguales
    ordenar(numeros[0], numeros[1], numeros[2]);

    return 0;
}

void ordenar(int a, int b, int c) {
    if (a == b && a == c) {
        printf("Todos los números son iguales: %i, %i, %i\n", a, b, c);
    }
    //Dos iguales
    else if (a == b && b != c) {
        printf("%i y %i SON IGUALES\n", a, b);
        if (c > a) {
            printf("Orden: %i, %i, %i\n", a, b, c);
        } else {
            printf("Orden: %i, %i, %i\n", c, a, b);
        }
    } else if (a == c && a != b) {
        printf("%i y %i SON IGUALES\n", a, c);
        if (b > a) {
            printf("Orden: %i, %i, %i\n", a, c, b);
        }
        else {
            printf("Orden: %i, %i, %i\n", b, a, c);
        }
    }
    else if (b == c && b != a) {
        printf("%i y %i SON IGUALES\n", b, c);
        if (a > b) {
            printf("Orden: %i, %i, %i\n", b, c, a);
        }
        else {
            printf("Orden: %i, %i, %i\n", a, b, c);
        }

    }
    else {
        if (a > b && a > c) {
            if (b > c) {
                printf("Orden: %i, %i, %i", c, b, a);
            } else {
                printf("Orden: %i, %i, %i", b, c, a);
            }
        } else if (b > a && b > c) {
            if (a > c) {
                printf("Orden: %i, %i, %i", c, a, b);
            } else {
                printf("Orden: %i, %i, %i", a, c, b);
            }
        } else if (c > a && c > b) {
            if (a > b) {
                printf("Orden: %i, %i, %i", b, a, c);
            } else {
                printf("Orden: %i, %i, %i", a, b, c);
            }
        }
    }
}
