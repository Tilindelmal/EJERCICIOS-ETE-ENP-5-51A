//16. Calcular el factorial de cualquier número.

#include <stdio.h>

long factorial(long numero);//Ponemos la funcion al principio para que el compiladores la indentifique

int main() {
    int numero = 0; //Inicializamos una variable local de tipo entero para almacenar datos posteriormente
    printf("Escribe el numero del que deseas obtener el factorial :D!!: ");
    //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
    scanf("%i", &numero);
    //Utilizamos un for para que nos muestre los valores de los factoriales indicados anterormente
    for (int i = 0; i <= numero; i++) {
        printf("%2d! = %li\n", i, factorial(i));

    }
    return 0;
}

long factorial(long numero) {//Funcion recursiva que nos hace el factorial
    if (numero <= 1) {
        return 1;
    }
    else {
        return numero * factorial(numero - 1);
    }
}