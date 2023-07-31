// Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cantidad = 0;
    float sueldo, acumulacion;
    system("clear");

    do
    {
        printf("Ingrese un sueldo (en caso de no querer imprimir mas presione 0): ");
        scanf("%f", &sueldo);
        acumulacion += sueldo;
        cantidad++;

    } while (sueldo != 0);

    printf("\nSuma de sueldos: %f", acumulacion);
    printf("\nSueldo promedio: %f", (acumulacion / cantidad));

    printf("\n\nPresione una tecla para salir... ");
    getchar();
}