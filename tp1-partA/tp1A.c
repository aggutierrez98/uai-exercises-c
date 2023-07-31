#include <stdio.h>
#include <stdlib.h>

void main()
{
    int emp, ch, vh, sdo;
    system("clear");
    printf("Ingrese el numero del empleado:   ");
    scanf("%d", &emp);
    printf("Ingrese la cantidad de horas:   ");
    scanf("%d", &ch);
    printf("Ingrese el valor de la hora:   ");
    scanf("%d", &vh);
    sdo = ch * vh;
    printf("El empleado %d, cobra %d pesos \n", emp, sdo);
    printf("Presione una tecla para salir... ");
    getchar();
}