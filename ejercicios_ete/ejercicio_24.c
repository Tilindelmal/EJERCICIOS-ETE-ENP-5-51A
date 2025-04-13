/*Modificar el programa anterior para considerar también los minutos de uso (2
pesos por 1 a 15 minutos).  */
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
    int horas;
    int precio_horas;
    int minuto_entrada;
    int minuto_salida;
    int minutos;
    int precio_minutos;
    int total;
    int minutos_totales;
} cliente;

int main() {
    printf("Digite su hora de entrada: ");
    //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
    scanf("%i", &cliente.hora_entrada);
    //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
    while (cliente.hora_entrada <= 0 || cliente.hora_entrada > 24) {
        printf("CANTIDAD INVALIDA!! >:(\nDigite de nuevo la cantidad: ");
        //Datos de entrada por si las entradas iniciales no fueron validas
        scanf("%i", &cliente.hora_entrada);
    }
    printf("\nDigite su minuto de entrada: ");
    scanf("%i", &cliente.minuto_entrada);
    while (cliente.minuto_entrada < 0 || cliente.minuto_entrada >= 60) {
        printf("CANTIDAD INVALIDA!! >:(\nDigite de nuevo la cantidad: ");
        //Datos de entrada por si las entradas iniciales no fueron validas
        scanf("%i", &cliente.minuto_entrada);
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
    printf("Digite su minuto de salida: ");
    scanf("%i", &cliente.minuto_salida);
    while (cliente.minuto_salida < 0 || cliente.minuto_salida >= 60) {
        printf("CANTIDAD INVALIDA!! >:(\nDigite de nuevo la cantidad: ");
        //Datos de entrada por si las entradas iniciales no fueron validas
        scanf("%i", &cliente.minuto_salida);
    }

    cliente.minutos_totales = (cliente.hora_salida * 60 + cliente.minuto_salida) - (
                                  cliente.hora_entrada * 60 + cliente.minuto_entrada);
    cliente.horas = cliente.minutos_totales / 60;
    cliente.minutos = cliente.minutos_totales % 60;
    //Calculo de dinero por hora
    cliente.precio_horas = cliente.horas * 7;
    if (cliente.minutos > 0 && cliente.minutos <= 15) {
        cliente.precio_minutos = 2;
    } else if (cliente.minutos > 15) {
        cliente.precio_minutos = 4;
    } else {
        cliente.precio_minutos = 0;
    }
    cliente.total = cliente.precio_minutos + cliente.precio_horas;
    printf("Su cantidad a pagar es de $%i MXN y estuvo un total de %ih y %i minutos:D\n", cliente.total, cliente.horas,
           cliente.minutos);

    return 0;
}
