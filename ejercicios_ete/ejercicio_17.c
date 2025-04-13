//Imprimir la tabla de multiplicar de cualquier número

#include <stdio.h>

int main() {
    //Inicializamos unas variables local de tipo entero para las multiplicaciones
    int numero = 0, multiplicacion;
    //Inicializamos una variable local de tipo char para las opciones
    char opcion;
    //Entramos a un do-while para que el usuario lo haga las veces que quiera
    do {
        //Preguntamos al usuario que cual numero desea saber su tabla de multiplicar
        printf("Ingrese de que numero quiere saber su tabla de multiplicar!!!: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
        scanf("%i", &numero);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (numero <= 0) {
            printf("OPCION NO VALIDA >:( !!!\n");
            printf("Digite de nuevo el numero: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf("%i", &numero);
        }
        //For para multiplicar y mostrar la tabla del numero indicado por el usuario
        for (int i = 0; i <= 10; i++) {
            multiplicacion = numero * i;
            //Filtramos con una sentencia if para no mostrar el cero en la multiplicacion
            if (multiplicacion > 0) {
                printf("%i x %i = %i\n", numero, i, multiplicacion);
            }
        }
        //Preguntamos si quiere saber otra tabla de multiplicar
        printf("Desea saber otra tabla de multiplicar s/n??: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo char con un puntero
        scanf(" %c", &opcion);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (opcion != 's' && opcion != 'n') {
            printf("OPCION NO VALIDA >:( !!!\n");
            printf("Digite de nuevo la opcion: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf(" %c", &opcion);
        }
    }while (opcion == 's');
    printf("¡Gracias por usar el programa :D!\n");
    return 0;
}
