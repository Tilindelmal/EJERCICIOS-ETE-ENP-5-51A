/*Considera que n es un entero con valor inicial de -5 y haga una lista con los 15
primeros términos de la sucesión cuyo término general es 1 / (5*n+6). */

#include <stdio.h>

int main() {
    //Variables locales enteras donde n sera el termino general de la sucesion e i descubrelo tu xd
    int n = 0, i = 0;
    //Inicializamos una variable local tipo float ya que dividimos entre 1 ajjaja
    float sucesion = 0;
    //Andidamos un ciclo para hacerlo de 15 repeticiones exactas 
    for (n = -5; i < 15; n++) {
        //Evaluamos el caso donde sera 0 y lo descartamos 
        if ((5 * n + 6) != 0) {
            sucesion = 1.0 / ((5 * n) + 6);//No hace falta decir que hace aqui xd
            printf("%i.- %.2f\n", i + 1, sucesion);//Imprime el resultado de la sucesion
            i++;//xd
        }
    }
        return 0;
    }
