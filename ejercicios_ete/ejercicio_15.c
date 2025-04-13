/*Pregunte que desea estudiar el usuario. Las carreras disponibles son medicina,
ingeniería, arquitectura, actuaría y química y mande un mensaje con los
requisitos que necesita para ingresar a dicha carrera. */
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
        printf("1)Medicina\n2)Ingenierias\n3)Arquitectura\n4)Quimica\n5)Actuaria\n");
        //Escaneamos el valor de entrada y se guarda en la variable tipo entero con un puntero
        scanf(" %i", &opciones);
        //Usamos un while como filtro para detectar si las entradas son validas y poder renovar los datos de entrada
        while (opciones <= 0 || opciones > 5) {
            printf("¡¡OPCION NO VALIDA!!\nDigite otra vez la opcion: ");
            //Datos de entrada por si las entradas iniciales no fueron validas
            scanf(" %i", &opciones);
        }
        //Anidadmos un switch para la eleccion del usuario de la porra de su eleccion
        switch (opciones) {
            //MedicinaZzzzz
            case 1:
                printf("\n🏥 Medicina\n");
                printf("- Área del pase reglamentado: Área 2 (Biológicas y de la Salud)\n");
                printf("- Promedio recomendado: 9.0 o más\n");
                printf("- Requisitos:\n");
                printf("  * Estar en Área 2 o cambiarse antes de 6° semestre\n");
                printf("  * Tener promedio alto (muy demandada)\n");
                printf("  * Si es ingreso por examen, se requieren más de 110 aciertos\n");
                break;
            //IngenieriaGODx100
            case 2:
                printf("\n⚙️ Ingeniería\n");
                printf("- Área del pase reglamentado: Área 1 (Físico-Matemáticas)\n");
                printf("- Promedio recomendado: 8.0 o más (dependiendo de la carrera)\n");
                printf("- Requisitos:\n");
                printf("  * Estar en Área 1\n");
                printf("  * Algunas como Eléctrica y Electrónica son de acceso directo\n");
                printf("  * Carreras como Computación o Mecatrónica requieren promedio alto\n");
                break;
            //Esos ni existen XD
            case 3:
                printf("\n🏛️ Arquitectura\n");
                printf("- Área del pase reglamentado: Área 1 o Área 4\n");
                printf("- Promedio recomendado: 8.5 o más\n");
                printf("- Requisitos:\n");
                printf("  * Presentar y aprobar un curso propedéutico\n");
                printf("  * Habilidades en dibujo técnico y matemáticas\n");
                break;
            //Los quimicos PRO
            case 4:
                printf("\n🧪 Química\n");
                printf("- Área del pase reglamentado: Área 2 (Biológicas y Químicas)\n");
                printf("- Promedio recomendado: 8.0 o más\n");
                printf("- Requisitos:\n");
                printf("  * Buen manejo de laboratorio y razonamiento científico\n");
                printf("  * Estar en Área 2\n");
                break;
            //Actuariazzz
            case 5:
                printf("\n📊 Actuaría\n");
                printf("- Área del pase reglamentado: Área 1 (Físico-Matemáticas)\n");
                printf("- Promedio recomendado: 8.5 o más\n");
                printf("- Requisitos:\n");
                printf("  * Muy buena base en matemáticas y lógica\n");
                printf("  * Alta competencia, se recomienda promedio alto\n");
                break;
        }
        //Pregunta si quieres ver otra porra
        printf("Quieres ver otra carrera de C.U s/n?: ");
        //Escaneamos el valor de entrada y se guarda en la variable tipo char con un puntero
        scanf(" %c", &opcs);
        while (opcs != 's' && opcs != 'n') {
            //Filtro para verificar qure las entradas sean validas
            printf("¡¡OPCION NO VALIDA!!\nDigite otra ves la opcion: ");
            scanf(" %c", &opcs); //Reescanea el valor en caso de ser invalido
        }
    } while (opcs == 's'); //Mientras la respuesta del usuario sea si se ejecutara
    printf("¡Gracias por usar el programa :D!!\n");
    return 0;
}
