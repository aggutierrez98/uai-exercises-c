// 2) Cree un programa para ingresar 10 números en un vector y luego que permita
// introducir un número para realizar una búsqueda. Permita que el operador del programa
// elija que tipo de algoritmo quiere utilizar por medio de un menú (debe ser búsqueda
// binaria o secuencial).

#include <stdio.h>
#include <stdlib.h>

int busquedaBinaria(int array[], int dato)
{
    int n = 10;
    int iteraciones = 0;
    int centro, inf = 0, sup = n - 1;

    while (inf <= sup)
    {
        iteraciones++;
        centro = ((sup - inf) / 2) + inf;

        printf("\nValor de array centro %d\n", array[centro]);

        if (array[centro] == dato)
        {
            printf("Total de %d iteraciones\n", iteraciones);
            return centro;
        }
        else if (dato < array[centro])
            sup = centro - 1;
        else
            inf = centro + 1;
    }

    printf("Total de %d iteraciones\n", iteraciones);
    return -1;
}

int busquedaSecuencial(int array[], int dato)
{
    int i;
    for (i = 0; i < 10; i++)
    {

        if (array[i] == dato)
        {
            printf("Total de %d iteraciones\n", i);
            return i;
        }
    }
    printf("Total de %d iteraciones\n", i);
    return -1;
}

void analizarResultado(int resultado)
{
    if (resultado >= 0)
    {
        printf("El dato se encuentra en la posicion %d\n", resultado);
    }
    else
    {
        printf("No se encontro el dato a buscar\n");
    }
}

int main(int argc)
{
    int arrayReLoco[10];
    int dato, forma;

    printf("\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Ingresar valor del array en posicion %d: ", i);
        scanf("%d", &arrayReLoco[i]);
    }

    printf("\n\n");

    printf("Ingrese dato a buscar (0 para terminar): ");
    scanf("%d", &dato);

    printf("Ingrese como querra buscar el dato\n");
    printf("\n1 para binaria");
    printf("\n2 para secuencial");
    scanf("%d", &forma);

    while (dato != 0)
    {
        int resultado = busquedaBinaria(arrayReLoco, dato);
        analizarResultado(resultado);

        printf("\nIngrese dato a buscar (0 para terminar): ");
        scanf("%d", &dato);
    }

    printf("\n\nPrograma terminado.....");
}
