/*Crear un programa para un cibercafé, que solicite hora de inicio, hora final y
calcule el total a pagar a partir del tiempo de uso (7 pesos por hora). */
#include <stdio.h>

/*
 * hora[0] = hora de entrada;
 * hora[1] = hora de salida;
 * hora[2] = cantidad de horas de estancia;
 * hora[3] = precio a pagar
 */
//Estructura para manejar de manera mas clara los precios y horas
struct tiempo {
    int hora_entrada;
    int hora_salida;
    int minutos;
    int horas;
    int precio;
}cliente;

int main() {
    //Arreglo donde almacenaremos las horas de entrada, salida, estancia y precio
    //int hora[4] = {0};
    printf("Digite su hora de entrada: ");
    //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
    scanf("%i", &cliente.hora_entrada);
    //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
    while (cliente.hora_entrada <= 0 || cliente.hora_entrada > 24) {
        printf("CANTIDAD INVALIDA!! >:(\nDigite de nuevo la cantidad: ");
        //Datos de entrada por si las entradas iniciales no fueron validas
        scanf("%i", &cliente.hora_entrada);
    }
    printf("Digite su hora de salida: ");
    //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
    scanf("%i", &cliente.hora_salida);
    //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
    while (cliente.hora_salida < cliente.hora_entrada || cliente.hora_salida > 24) {
        printf("CANTIDAD INVALIDA!! >:(\nDigite de nuevo la cantidad: ");
        //Datos de entrada por si las entradas iniciales no fueron validas
        scanf("%i", &cliente.hora_salida);
    }
    //Clculo de horas
    cliente.horas = cliente.hora_salida - cliente.hora_entrada;
    //Calculo de dinero por hora
    cliente.precio = cliente.horas * 7;
    printf("Su cantidad a pagar es de $%i MXN y estuvo un total de %ih :D\n", cliente.precio, cliente.horas);

    return 0;
}
