#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero;
    system("clear");
    printf("Ingrese un numero:   ");
    scanf("%d", &numero);
    printf("\nEl numero es: ");
    if (numero > 0)
    {
        printf("POSTIVO");
    };
    if (numero < 0)
    {
        printf("NEGATIVO");
    };
    if (numero == 0)
    {
        printf("CERO");
    };
    printf("\nPresione una tecla para salir... ");
    getchar();
}