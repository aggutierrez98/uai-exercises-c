#include <stdio.h>
#include <stdlib.h>

void main()
{
    int primerLado, segundoLado, tercerLado;
    system("clear");
    printf("Ingrese un lado: ");
    scanf("%d", &primerLado);
    printf("Ingrese otro lado: ");
    scanf("%d", &segundoLado);
    printf("Ingrese el ultimo lado: ");
    scanf("%d", &tercerLado);

    printf("\nEl triangulo es: ");
    if (primerLado == segundoLado && segundoLado == tercerLado)
    {
        printf("EQUILATERO");
    }
    else if (primerLado == segundoLado || segundoLado == tercerLado)
    {
        printf("ISOCELES");
    }
    else
    {
        printf("ESCALENO");
    }
    printf("\nPresione una tecla para salir... ");
    getchar();
}