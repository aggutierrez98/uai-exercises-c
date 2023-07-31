// Ingresar30 valores.Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, cuantosentre 20 y 30 y cuantos son mas de 30. Luego mostrar el porcentaje de cadagrupo en el total.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int val;
    int unoydiez = 0, diezyveinte = 0, veintetreinta = 0, mastreinta = 0;
    system("clear");

    for (int i = 0; i < 30; i++)
    {
        printf("Ingrese un valor:   ");
        scanf("%d", &val);

        if (val > 0 && val < 10)
        {
            unoydiez++;
        }
        else if (val >= 10 && val < 20)
        {
            diezyveinte++;
        }
        else if (val >= 20 && val < 30)
        {
            veintetreinta++;
        }
        else if (val >= 30)
        {
            mastreinta++;
        }
    }

    printf("\nValores entre 1 y 10: %d", unoydiez);
    printf("\nValores entre 10 y 20: %d", diezyveinte);
    printf("\nValores entre 20 y 30: %d", veintetreinta);
    printf("\nValores mayores a 30: %d", mastreinta);

    printf("Presione una tecla para salir... ");
    getchar();
}