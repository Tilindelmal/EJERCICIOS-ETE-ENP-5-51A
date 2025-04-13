/*Hacer un promedio de números según requiera el usuario. Ejemplo:
a)Escribe un número: 7
b) Desea escribir más números s/n?, si sí repetir a, si no realizar imprimir el
promedio. */

#include <stdio.h>

int main() {
    //Inicializamos una variable local de tipo char para las opciones
    char opciones;
    //Inicializamos tres variables locales tipo float para operaciones posteriores
    float numero, promedio, suma = 0;
    //Es el contador de repeticiones
    int repeticiones;
    //Entramos a un do-while para hacerlo las veces que queremos
    do {
        printf("Escriba un numero: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo float con un puntero
        scanf("%f", &numero);
        //Acumulador donde se van sumando los numeros ingresados
        suma += numero;
        //Aumenta de uno en uno repeticiones
        repeticiones++;
        //Pregunta si se quiere seguir con la ejecucion del programa
        printf(" Desea escribir más números s/n?: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo char con un puntero
        scanf(" %c", &opciones);
        //Filtro con un while para verificar si las entradas son correctas y si no volverlas a ingresar
        while (opciones != 's' && opciones != 'n') {
            printf("¡¡OPCIÓN INVÁLIDA!! Ingrese 's' o 'n': ");
            scanf(" %c", &opciones);
        }
    } while (opciones == 's'); //El ciclo se repite mientras opciones valga s
    promedio = suma / repeticiones; //Acaba la ejecucion de do-while y hacemos el promedio
    printf("El promedio es: %.1f\n", promedio);//Mostramos ek promedio final
}
