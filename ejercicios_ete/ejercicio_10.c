/*Pregunte que desea estudiar el usuario. Las carreras disponibles son
medicina, ingeniería, arquitectura, actuaría y química, imprimir la porra de la
facultad.*/

#include <stdio.h>

int main() {
    //Inicializamos una variable local de tipo entero para las opciones
    int opciones = 0;
    //Inicializamos una variable local de tipo char para las opciones
    char opcs;
    //Entramos a un do-while para que el usuario lo haga las veces que quiera
    do {
        //Opciones de carreras
        printf("Elige la carrera que deseas estudiar:\n");
        printf("1)Medicina\n2)Ingenieria Electronica\n3)Arquitectura\n4)Quimica\n");
        //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
        scanf(" %i", &opciones);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (opciones <= 0 || opciones > 4) {
            printf("¡¡OPCION NO VALIDA!!\nDigite otra vez la opcion: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf(" %i", &opciones);
        }
        //Anidadmos un switch para la eleccion del usuario de la porra de su eleccion
        switch (opciones) {
            //MedicinaZzzzz
            case 1:
                printf("Porra de la Facultad de Medicina de la UNAM:\n");
                printf("útero pene vagina x3, arriba la facultad de medicina\n");
                break;
            //IngenieriaGODx100
            case 2:
                printf("Porra de la Facultad de Ingenieria de la UNAM:\n");
                printf("1er porra:\nseno, coseno, tangente e ingeniería, presente\n");
                printf("2da porra:\nrayos, truenos, aguaceros. Ferrocarriles, ");
                printf("puentes de acero. Siempre serán los primeros: La facultad de ingenieros\n");
                break;
            //Esos ni existen XD
            case 3:
                printf("Porra de la facultad de arquitectura de la UNAM:\n");
                printf("No encontre su porra :(\n");
                break;
            //Los quimicos PRO
            case 4:
                printf("Porra de la facultad de quimica de la UNAM:\n");
                printf("1er porra:\nEtil, metil y cetona. Química la más chingona\n");
                printf("2da porra:\nTrompo, balero y canicas, trompo, balero y canicas, arriba Ciencias químicas!\n");
                break;
        }
        //Pregunta si quieres ver otra porra
        printf("Quieres ver otra porra de C.U s/n?: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo char con un puntero
        scanf(" %c", &opcs);
        while (opcs != 's' && opcs != 'n') {//Filtro para verificar qure las entradas sean validas
            printf("¡¡OPCION NO VALIDA!!\nDigite otra ves la opcion: ");
            scanf(" %c", &opcs);//Reescanea el valor en caso de ser invalido
        }
    } while (opcs == 's');//Mientras la respuesta del usuario sea si se ejecutara
    printf("¡Gracias por usar el programa :D!!\n");
    return 0;
}
