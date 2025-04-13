//Programa que dibuje un circulo moviéndose en la pantalla

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // usa sleep() o usleep() en Linux/Mac
// Para Windows, cambia usleep() por Sleep() y agrega #include <windows.h>

int main() {
    int x = 0;
    int direccion = 1;

    while (1) {
        system("cls"); // Si estás en Windows, usa "cls"

        // Espacios en blanco para simular movimiento horizontal
        for (int i = 0; i < x; i++) {
            printf(" ");
        }

        printf("o\n"); // El "círculo"

        Sleep(100); // 100 ms (en Linux/Mac). En Windows sería Sleep(100)

        x += direccion;

        // Rebote entre los límites
        if (x >= 40 || x <= 0) {
            direccion *= -1;
        }
    }

    return 0;
}
