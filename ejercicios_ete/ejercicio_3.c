/*Elabore un programa que lea una calificación por teclado y muestre en
pantalla:
a) SOBRESALIENTE, en el caso de que la nota sea mayor o igual que 9 y
menor o igual que 10.
b) NOTABLE, en el caso que la nota sea mayor o igual que 7 y menor que 9.
c) BIEN, en el caso de que la nota sea mayor o igual que 6 y menor que 7
d) SUFICIENTE, en el caso de que la nota sea mayor o igual que 05 y menor
que 6. d) INSUFICIENTE, en el caso de que la nota sea mayor o igual que 3 y
menor que 5,
f) MUY DEFICIENTE, en el caso de que la nota sea mayor o igual que 0 y menor
que 3.
g) Error, NOTA INCORRECTA, en el caso de que la nota sea menor que 0 ó
mayor que 10*/

#include <stdio.h>

int main() {
    //Inicializamos una varible local tipo flotante para que en esa variable se guarde la calificacion ingresada
    float calificacion = 0;
    printf("Ingrese su calificacion del año para ser evaluado: ");
    //Se ingresa el numero pedido y es alamacenado con un puntero en la variable calificacion
    scanf("%f",&calificacion);
    //Primero aplicamos un filtro para verificar que la calificacion este en el rango de 0-10, si no retorna un 1
    if (calificacion < 0 || calificacion > 10) {
        printf("%.1f -> NOTA INCORRECTA!!\n");
        return 1;
    }
    //Sentencias else if para la etiquetacion de la calificacion ingresada y evitar repeticion de if's
    else if (calificacion >= 9 && calificacion <= 10) {
        printf("Calificacion: %.1f -> SOBRESALIENTE\n", calificacion);
    }
    else if (calificacion >= 7 && calificacion < 9 ) {
        printf("Calificacion: %.1f -> NOTABLE\n", calificacion);
    }
    else if (calificacion >= 6 && calificacion < 7) {
        printf("Calificacion: %.1f -> BIEN\n", calificacion);
    }
    else if (calificacion >= 5 && calificacion < 6) {
        printf("Calificacion: %.1f -> SUFICIENTE\n", calificacion);
    }
    else if (calificacion >= 3 && calificacion < 5) {
        printf("Calificacion: %.1f -> INSUFICIENTE\n", calificacion);
    }
    //Como abarcamos ya abarcamos los demas casos un else if solo ponemos un else y acabamos todos los casos solicitados
    else {
        printf("Calificacion: %.1f -> MUY DEFICIENTE\n", calificacion);
    }
    return 0;
}