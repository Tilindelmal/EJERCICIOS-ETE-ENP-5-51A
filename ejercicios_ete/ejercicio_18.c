/*. Crear un programa para calcular los salario semanal de unos empleados a los
que se les paga 70 pesos por hora si éstas no superan las 35 horas. Cada
hora por encima de 35 se considerará extra y se paga a 100 pesos.
El programa pide las horas del trabajador y devuelve el salario que se le debe
pagar. */

#include <stdio.h>

int main() {
    // Inicializamos un arreglo local de tipo flotante para almacenar los datos de los salarios y horas extra
    float salario_p[2];
    // salario_p[0] = salario_total;
    // salario_p[1] = salario_extra;
    //Inicializamos una variable local tipo entera para usarla como entrada y guardar las horas trabajadas
    int horas;
    //Inicializamos una variable local tipo char para usarla como validador si se requiere otra consulta
    char opcion;
    do {//Entramos a un do-while para que el usuario lo haga las veces que quiera
        //Pedimos las horas trabajadas
        printf("Digite sus horas trabajadas: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
        scanf("%i", &horas);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (horas <= 0) {
            printf("¡OPCION INVALIDA!\nDigite de nuevo sus horas trabajadas: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf("%i", &horas);
        }
        //Con una sentencia if preguntamos si las horas son menores que 35 horas y pagamos lo correspondiente
        if (horas <= 35) {
            salario_p[0] = (horas * 70);
            printf("Su salario es de $%.2f MXN!!! Sigue asi!!!\n", salario_p[0]); //Mostramos su salario
        }
        //Si es mayor a 35 horas pagamos el salario correspondiente a 35 horas y luego pagamos lo correspondiente > 35h
        else {
            salario_p[1] = ((horas - 35) * 100);
            salario_p[0] = ((35 * 70) + salario_p[1]);
            //Mostramos su salario
            printf("En hora buena, su salario es de $%.2f MXN :D y se le pago $%.2f MXN por horas extra!!!!\n",
                   salario_p[0], salario_p[1]);
        }
        printf("Desea otra consulta de salario s/n?: ");
        scanf(" %c", &opcion);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (opcion != 's' && opcion != 'n') {
            printf("OPCION NO VALIDA >:( !!!\n");
            printf("Digite de nuevo la opcion: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf(" %c", &opcion);
        }
    } while (opcion == 's');
    printf("¡Gracias por usar el programa :D!\n");
    return 0;
}
