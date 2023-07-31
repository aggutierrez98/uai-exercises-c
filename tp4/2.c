// Ingresar facturas hasta nro de factura = 0, sumar sus importes
// y cúales y cuantas superan los $1000. Imprimir los resultados

// Sobre el ejercicio anterior indicar cuántas estan entre
// $ 400 y $ 700 inclusive e imprimir el resultado

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int superanMil = 0, entre400y500 = 0, nroFactura;
    float importe, acumulacion;
    char *superanNros;

    system("clear");

    do
    {
        printf("Ingrese un numero de factura (en caso de no querer ingresar mas ingrese 0): ");
        scanf("%d", &nroFactura);

        printf("Ingrese el importe de la factura: ");
        scanf("%f", &importe);

        acumulacion += importe;

        if (importe > 1000)
        {
            superanMil++;
        }
        else if (importe < 400 && importe >= 700)
        {
            entre400y500++;
        }

    } while (nroFactura != 0);

    printf("\nSuma de importes: %f", acumulacion);
    printf("\nSuperan mil: %d", superanMil);
    printf("\nEntre $400 y $500: %d", entre400y500);

    printf("\n\nPresione una tecla para salir... ");
    getchar();
}