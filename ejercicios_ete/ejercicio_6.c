/*Pregunte que refresco prefiere el usuario y envíe un mensaje. Solo hay Coca
Cola (c), Fanta (f), Pepsi Cola (p) y Manzanita (m). Ejemplo: (selección=’c’,
mensaje:”Destapa la felicidad”). */

#include <stdio.h>

int main() {
    //Inicializamos una variable local de tipo char para las opciones
    char opcion;
    //Preguntamos por ele refresco prefereido
    printf("Que refresco prefiere??:\n");
    printf("a)Coca Cola\nb)Fanta\nc)Pepsi Cola\nd)Manzanita(La mejor XDD)\n");
    //Escaneamos el valor de entrada y se guarda en la variable tipo char con un puntero
    scanf(" %c", &opcion);
    //Anidadmos un switch para la eleccion del usuario
    switch (opcion) {
        //Opcion de Coca-ColaZzzzz
        case 'a':
            printf("Coca Cola Destapa la felicidad...(Manzanita es mejor :D)\n");
            break;
        //Opcion de FantaMID
        case 'b':
            printf("Fanta ¡Más sabor, más diversión!(Manzanita sigue siendo mejor :) )\n");
            break;
        //Opcion de PepsiZzzz
        case 'c':
            printf("Pepsi lo da todo (Manzanita god)\n");
            break;
        //Opcion del mejor refresco existente MANZANITA GOD!!!!
        case 'd':
            printf("MANZANITA GOD: Déjate seducir por su exótico sabor… y cae en la tentación\n");
            break;
        //Filtro si ninguna de las opciones es valida
        default:
            printf("¡OPCION NO VALIDA! >:(\n");
            return 1;
    }
    return 0;
}
