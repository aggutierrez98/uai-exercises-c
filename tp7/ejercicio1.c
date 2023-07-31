// 1) Ingrese 20 valores en un vector e imprimalo ordenado utilizando el algoritmo
// bubblesort u ordenamiento por burbujeo.

#include <stdio.h>
#include <stdlib.h>

void ordenar(int array[20])
{

    int n = 10;
    int i, y, aux = 0;
    for (i = 0; i < n - 1; i++)
    { // recorro el array hasta dos posiciones antes del final
        for (y = 0; y < n - i - 1; y++)
        { // por cada posicion, vuelvo a recorrerlo todo

            // comparo con la posición siguiente, si es mayor...
            if (array[y] > array[y + 1])
            {
                // utilizo una variable auxiliar para guardar temporalmente el valor actual
                aux = array[y];
                // guardo en la posicion actual, el valor de la siguiente
                array[y] = array[y + 1];
                // guardo en la posicion siguente el valor que teniamos en aux
                array[y + 1] = aux;
            }
        }
    }
}

int main(int argc)
{
    int arrayReLoco[20];

    printf("\n\n");

    for (int i = 0; i < 20; i++)
    {
        printf("Ingresar valor del array en posicion %d: ", i);
        scanf("%d", &arrayReLoco[i]);
    }

    ordenar(arrayReLoco);

    printf("\n\n");

    for (int i = 0; i < 20; i++)
    {
        printf("El valor de la pos %d es %d\n", i, arrayReLoco[i]);
    }

    printf("\n\nPrograma terminado.....");
}
