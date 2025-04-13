/*Leer dos numeros, el primero correspondiente a un mes y el segundo correspondiente al dia de dicho mes. Escribir
 * el dia referido . Ejemplo("10 de mayo")
 */

 #include <stdio.h>

 int main() {
     //Inicializamos la variables locales de tipo entero
     int dia = 0, mes = 0;
     //Inicializamos los arreglos de tipo entero y string para almacenar los meses y los dias que tiene cada mes
     char* meses[13] = {"","Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Novimbre", "Diciembre"};
     int diasMes[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
 
     printf("Escriba el numero del mes deseado y el dia:");
     //Se lee leen los datos de entrada que son las variables mes y dia
     scanf("%i %i", &mes, &dia);
     //Se aplica un filtro para evitar numeros negativos o pasarse de los dias establecidos
     if (mes <= 0 || mes > 12 || dia <=0 || dia > diasMes[mes]) {
         printf("Mes o dia no valido!!");
         return 1;
     }
     //Imporime los datos de entrada en el formato dia  numDia de x_mes
     printf("%i de %s\n", dia, meses[mes]);
     return 0;
 }