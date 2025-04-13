/*Un Vendedor ofrece su producto de la siguiente manera: Si le compran 10
artículos o menos, el precio por producto es de 20000 pesos. Si le compran
más de 10, el precio es de 15000 pesos. Con solo proporcionarle la cantidad
de artículos de cómo resultado el precio y el total. */

#include <stdio.h>

int main() {
    //inicializamos las variables locales de tipo entero y un arreglo float para los precios y entradas
    int productos = 0;
    float precio[2] = {0};
    //Inicializamos una variable tipo char para las opciones
    char opciones;
    do {//Entramos a un do-while para que el usuario lo haga las veces que quiera
        printf("Digite la cantidad de productos que lleva: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
        scanf("%i", &productos);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (productos <= 0) {
            printf("Digite una cantidad valida!!!: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf("%i", &productos);
        }
        //Con una sentencia if preguntamos si son menos o son 10 productos para el precio correspondiente
        if (productos <= 10) {
            precio[0] = productos * 20000;
            printf("Por %i productos pagara: $%.2f MXN\n", productos, precio[0]);//Precio a pagar
        }
        else {//Si es mayor a 10 productos para el precio correspondiente
            precio[1] = ((productos - 10) * 15000);
            precio[0] = ((10 * 20000) + precio[1]);
            printf("Por %i productos pagara: $%.2f MXN\n", productos, precio[0]);//Precio a pagar
        }

        printf("Desea otra compra? s/n?: ");
        scanf(" %c", &opciones);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (opciones != 's' && opciones != 'n') {
            printf("OPCION NO VALIDA >:( !!!\n");
            printf("Digite de nuevo la opcion: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf(" %c", &opciones);
        }
    }while (opciones == 's');
    return 0;
}