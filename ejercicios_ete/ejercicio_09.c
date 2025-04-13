//Determinar si un número es positivo o negativo.

#include <stdio.h>

int main() {
    //Inicializamos una variable local entera donde se guardara el dato ingresado por el usuario
    int numero = 0;
    printf("Ingrese el numero: ");
    //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
    scanf("%i", &numero);
    //Con una sentencia if evaluamos si el numero es negativo o no
    if (numero < 0) {
        printf("El numero %i es negativo!!!\n", numero);
    }
    //Si no es negativo entonces es 0
    else if (numero == 0) {
        printf("El numero es %i\n", numero);
    }
    //Entonces si no es 0 es POSITIVO
    else {
        printf("El numero %i es positivo!!!\n", numero);
    }
    return 0;
}