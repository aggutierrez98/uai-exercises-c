#include <stdio.h>
#include <stdlib.h>

void main()
{
    int primer, segundo;
    system("clear");
    printf("Ingrese un primer valor:   ");
    scanf("%d", &primer);
    printf("Ingrese un segundo valor:   ");
    scanf("%d", &segundo);
    printf("\nAmbos valores son: ");
    if (primer == segundo)
    {
        printf("IGUALES");
    }
    else
    {
        printf("DISTINTOS");
    }
    printf("\nPresione una tecla para salir... ");
    getchar();
}