/*Hacer un programa que muestre en pantalla un asterisco que se mueve de
izquierda a derecha hasta llegar al borde derecho. 
*/

#include <stdio.h>
#include <windows.h>//Para usar la funcion sleep y system("cls")

int main() {
    //Es un for que recorre toda la pantalla en el caso de que sea de 120 columnas como la mia
    for (int i = 0; i < 120; i++) {
        system("cls");
        for (int j = 0; j < i; j++) {
            printf(" ");
            //printf("*");
            //system("cls");
        }
        printf("*\n"); //Asterisco movil
        Sleep(10);//Funcion de retardos para ajustar la animacion
    }
    return 0;
}