/*22. Crear un programa en C que lea cantidades y precios y al final indique el
total a pagar. Ejemplo:
a) Cantidad: 5
b) Precio: 12
c) Desea agregar otro producto s/n? si sí, repetir a), si no calcular el total y
mostrarlo. */

#include <stdio.h>

float precio_total(int cantidad, float precio); //Funcion que nos permite calcular el precio total

int main() {
    //Inicializamos una variable local tipo char para las opciones
    char opciones;
    //Inicializamos una variable local tipo entero para la cantidad
    int cantidad = 0;
    //Inicializamos dos variables locales de tipo float para el precio del producto y el final
    float precio = 0, prc_total = 0;
    //Entramos a un do-while para que el usuario lo haga las veces que quiera
    do {
        printf("Digite la cantidad de productos que eligio: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
        scanf("%i", &cantidad);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (cantidad <= 0) {
            printf("CANTIDAD INVALIDA!! >:(\nDigite de nuevo la cantidad: ");
            scanf("%f", &cantidad);
        }

        printf("Digite el precio del producto: ");
        scanf("%f", &precio);
        while (precio <= 0){
            printf("CANTIDAD INVALIDA!! >:(\nDigite de nuevo la cantidad: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf("%f", &precio);
        }
        //Variable acumuladora donde se acumulara el precio total si se desea más productos
        prc_total += precio_total(cantidad, precio);
        printf("Desea agregar otro producto s/n?: ");
        scanf(" %c", &opciones);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (opciones != 's' && opciones != 'n') {
            printf("CANTIDAD INVALIDA!! >:(\nDigite de nuevo la opcion: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf(" %c", &opciones);
        }
    } while (opciones == 's');
    //Mostramos el total a pagar
    printf("El total de su compra es de $%.2f MXN :D", prc_total);
    return 0;
}
//Funcion que calcula los precios
float precio_total(int cantidad, float precio) {
    float total = precio * cantidad;
    return total;
}
