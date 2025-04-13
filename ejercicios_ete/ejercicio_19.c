/*Elabore un programa que capture la fecha de nacimiento de un usuario y de
acuerdo a la misma indicar si es un bebe, un niño o un adulto (tomamos el
año actual como referencia). */

#include <stdio.h>

int main() {
    //Inicializamos variables locales tipo entera para usarla como entrada y calcular la edad
    int fecha_nac, edad;
    //Usamos una constante entera que sera usada para el año actual
    const int anio_actual = 2025;

    printf("Ingrese su año de nacimiento: ");
    //Escaneamos el valor de entrada y se guarda en la variable tipo entera con un puntero
    scanf("%i", &fecha_nac);
    //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
    while (fecha_nac <= 1900 || fecha_nac > anio_actual) {
        printf("¡Año invalido! Intente de nuevo: ");
        //Datos de entrada por si las entradas iniciales no fueron validas
        scanf("%i", &fecha_nac);
    }
    //Calculamos la edad
    edad = anio_actual - fecha_nac;

    //Evaluamos con sentencias if, else-if y else si son bebes, adolescentes o adultos
    if (edad >= 0 && edad <= 2) {
        printf("Es un bebe y tiene: %i años!!\n", edad);
    } else if (edad >= 3 && edad <= 12) {
        printf("Es un niño y tiene: %i años!!\n", edad);
    } else if (edad >= 13 && edad <= 17) {
        printf("Es un adolescente y tiene: %i años", edad);
    } else {
        printf("Es un adulto y tiene: %i años", edad);
    }

    return 0;
}
