//Mostrar los múltiplos de 3 comprendidos entre los números 1 y 20.

#include <stdio.h>

int main() {
    //Mensaje donde muestro lo que el programa va a realizar
    printf("Este programa muestra los multiplos del 3 comprendidos de 1-20!!!!\n\n");
    for (int i = 0; i < 20; i++) { //Ciclo donde se mostraran valores del 0-20
        if (i % 3 == 0 && i != 0) {//Con la sentencia if se seleccionara solo a los números que sean multiplos de 3
            printf("Numero multiplo de 3 es: %i\n", i);//Se muestran a los multiplos de 3 del 1-20
        }
    }
}
