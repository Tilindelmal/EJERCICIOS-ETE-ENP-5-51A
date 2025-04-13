/*Pregunte qué desea ver el usuario y muestre una lista con mínimo de 5
películas que pueda seleccionar.. Sólo hay películas de Comedia (c),
Drama (d), Acción (a), Infantil (i) o Terror (t). Ejemplo: (selección=’i’
mensaje=”1.- lilo&stitch 2.- Madagascar …”). */

#include <stdio.h>

int main() {
    //Inicializamos una variable local de tipo char para las opciones
    char opcion;
    //Preguntamos por el genero preferido del usuario
    printf("¿Que genero le gustaria ver?: \n");
    printf("d) Drama\na) Accion\ni) Infantil\nt) Terror\n");
    //Escaneamos el valor de entrada y se guarda en la variable tipo char con un puntero
    scanf(" %c", &opcion);
    //Anidadmos un switch para la eleccion del usuario
    switch (opcion) {
        //Opcion de peliculas de drama
        case 'd':
            printf("Drama:\n1.-La Vida es Bella (Life is Beautiful)\n2.-Forrest Gump\n");
            printf("3.-El Pianista (The Pianist)\n4.-El Club de la Pelea (Fight Club)\n");
            printf("5.-Los Miserables (Les Misérables)\n");
            break;
        //Opcion de peliculas de Accion
        case 'a':
            printf("Accion:\n1.-Mad Max: Fury Road\n2.-John Wick\n3.-Gladiador (Gladiator)\n");
            printf("4.-Los Vengadores (The Avengers)\n5.-Misión Imposible (Mission: Impossible)\n");
            break;
        //Opcion de peliculas infantiles
        case 'i':
            printf("Infantil:\n1.-Toy Story\n2.-Lilo & Stitch\n3.-Madagascar\n4.-El Rey León (The Lion King)\n");
            printf("5.-Frozen\n");
            break;
        //Opcion de peliculas de terror
        case 't':
            printf("1.-El Conjuro (The Conjuring)\n2.-It (Eso Tilin)\n3.-El Resplandor (The Shining)\n");
            printf("4.-La Noche de los Muertos Vivientes (Night of the Living Dead)\n");
            printf("5.-Actividad Paranormal (Paranormal Activity)\n");
            break;
        //Filtro si ninguna de las opciones es valida
        default:
            printf("¡¡OPCION NO VALIDA >:((!!\n");
            return 1;
    }

    return 0;
}
