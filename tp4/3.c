// Ingresar N valores, calcular e imprimir el promedio
// de positivos, de negativos y cantidad de ceros

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cantidadPositivos = 0, cantidadNegativos = 0, cantidadCeros = 0;
    float valor;

    system("clear");

    do
    {
        printf("Ingrese un valor (en caso de no querer ingresar mas ingrese 0): ");
        scanf("%f", &valor);

        if (valor < 0)
        {
            cantidadNegativos++;
        }
        else if (valor == 0)
        {
            cantidadCeros++;
        }
        else if (valor > 0)
        {
            cantidadPositivos++;
        }

    } while (valor != 0);

    float cantidadTotal = cantidadNegativos + cantidadCeros + cantidadPositivos;

    // printf("\nCantidad total: %d", cantidadTotal);

    printf("\nPromedio de Ceros: % %.2f", (cantidadCeros / cantidadTotal) * 100);
    printf("\nPromedio de Menores a cero: % %.2f", (cantidadNegativos / cantidadTotal) * 100);
    printf("\nPromedio de Mayores a cero: % %.2f", (cantidadPositivos / cantidadTotal) * 100);

    printf("\n\nPresione una tecla para salir... ");
    getchar();
}