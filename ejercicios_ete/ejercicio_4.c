/*Pregunte el sexo de un bebé recién nacido y envíe un saludo. Ejemplo
(“Bienvenido al mundo bebé Juan”). */

#include <stdio.h>

int main() {
    //Inicializo una variable local tipo char para las opciones del sexo
    char sexo;
    //Inicializo un arreglo de caracteres(string) para guardar el nombre del bebe
    char nombre[20];
    //Pregunto el sexo del bebe
    printf("Seleccione el sexo de su bebe: \n");
    printf("a)Masculino \nb)Femenino\n\n");
    //Escaneamos los valores ingresados a la variable sexo con un puntero
    scanf(" %c", &sexo);
    //Verificamos con un filtro si elegio correctamente la opcion
    if (sexo != 'a' && sexo != 'b') {
        printf("\nOPCION NO VALIDA!!!");
        return 1;
    }
    //Ingresamos el nombre del bebe
    printf("Escriba el nombre su bebe: ");
    //Escaneamos la cadena de caracteteres que se ingreso al arreglo nombre, no se pone & ya que un array es un puntero
    scanf("%s", nombre);
    //Con un switch evaluamos los valores de la variable tipo char sexo
    switch (sexo) {
        //Si la variable tipo char contiene una a significa que el bebe es masculino
        case 'a':
            //Se realiza el saludo correspondiente con el nombre del bebe
            printf("¡¡¡Bienvenido al mundo bebe %s!!!\n", nombre);
            break;
        //Si la variable tipo char contiene una b significa que el bebe es femenino
        case 'b':
            //Se realiza el saludo correspondiente con el nombre del bebe
            printf("¡¡¡Bienvenida al mundo bebe %s!!!\n", nombre);
            break;
    }
    return 0;
}
