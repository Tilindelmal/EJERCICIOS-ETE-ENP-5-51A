/*Envíe un mensaje de precaución a los transeúntes, según el color el semáforo.
El color del semáforo será seleccionado por medio de un menú. Ejemplo:
Rojo - 1
Verde - 2
Amarillo – 3
Elección 3, mensaje: “Favor de desacelerar, alto total a continuación.”*/
#include <stdio.h>

int main() {
    //Inicializo una variable local de tipo entero para almacenar el resultado de la opcion seleccionada
    int opcion = 0;
    //Pregunta el color del semaforo al usuario
    printf("Seleccione el color del semaforo: \n");
    printf("1)Rojo\n2)Verde\n3)Amarillo\n");
    //Escanea el resultado del usuario y lo guarda en forma de puntero en la variable opcion
    scanf("%i", &opcion);
    //Aplicamos un filtro que evalua si la entrada o el valor de la variable es valido y esta en el rango de 0-3
    if (opcion <= 0 || opcion > 3) {
        printf("OPCION NO VALIDA!!!!\n");
        return 1;
    }
    //Aplicamos un switch para las opciones Verde, Rojo, Amarillo
    switch (opcion) {
        //Caso para la luz roja
        case 1:
            printf("Eleccion 1:\nALTO TOTAL!!!! FRENAR TOTALMENTE!!\n");
            break;
        //Caso para la luz verde
        case 2:
            printf("Eleccion 2:\nSIGA, Avanze con precaucion :D!\n");
            break;
        //Caso para la luz amarilla
        case 3:
            printf("Eleccion 3:FAVOR DE DESACELERAR, alto total a continuación :(\n");
    }
    return 0;
}
