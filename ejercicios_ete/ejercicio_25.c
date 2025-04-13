//Solicitar un número e indicar si es par o impar. Utilizar el operador módulo
//(%).

#include <stdio.h>

int main() {
    //Inicializamos una variable local tipo entero para la cantidad
    int numero = 0;
    printf("Ingrese su numero para saber si es par o impar!!!: ");
    //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
    scanf("%i", &numero);
    // Nota: Técnicamente el 0 es par, pero aquí lo ignoramos por diversión ;)
    while (numero == 0) {
        printf("El numero es cero XDDD\n");
        printf("Digite un numero que no abra debate entre los matematicos porfavor!!!: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
        scanf("%i", &numero);
    }
    //Evaluamos si es par o impar
    if (numero % 2 == 0) {
        printf("El numero %i es par :D!!!!\n", numero);
    } else {
        printf("El numero %i es impar :((\n", numero);
    }
    return 0;
}
