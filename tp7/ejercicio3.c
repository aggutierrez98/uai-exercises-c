// 3) Una consultora tiene 10 analistas y 15 proyectos en los que trabajan indistintamente,
// a fin de mes cada analista eleva una planilla con los siguientes datos

// Número de analista
// Número de proyecto
// Cantidad de hs trabajadas

// En memoria se debera cargar previamente el nombre de los analistas y el valor hora.
// Se desea saber:

// 1) Cantidad de hs. trabajadas en total por cada analista.
// 2) Total de horas trabajadas por cada analista en cada proyecto.
// 3) Total de hs trabajadas sobre cada proyecto.
// 4) Qué analista trabajó menos en el proyecto 1.
// 5) Sueldo decada analista.
// 6) Nombre del analista que cobró más.
// 7) Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos.
// 8) Imprimir ordenado en forma descendente por sueldo de los analista: nombre valor de la
// hora y sueldo

#include <stdio.h>
#include <stdlib.h>

// int busquedaBinaria(int array[], int dato)
// {
//     int n = 10;
//     int iteraciones = 0;
//     int centro, inf = 0, sup = n - 1;

//     while (inf <= sup)
//     {
//         iteraciones++;
//         centro = ((sup - inf) / 2) + inf;

//         printf("\nValor de array centro %d\n", array[centro]);

//         if (array[centro] == dato)
//         {
//             printf("Total de %d iteraciones\n", iteraciones);
//             return centro;
//         }
//         else if (dato < array[centro])
//             sup = centro - 1;
//         else
//             inf = centro + 1;
//     }

//     printf("Total de %d iteraciones\n", iteraciones);
//     return -1;
// }

// int busquedaSecuencial(int array[], int dato)
// {
//     int i;
//     for (i = 0; i < 10; i++)
//     {

//         if (array[i] == dato)
//         {
//             printf("Total de %d iteraciones\n", i);
//             return i;
//         }
//     }
//     printf("Total de %d iteraciones\n", i);
//     return -1;
// }

// void analizarResultado(int resultado)
// {
//     if (resultado >= 0)
//     {
//         printf("El dato se encuentra en la posicion %d\n", resultado);
//     }
//     else
//     {
//         printf("No se encontro el dato a buscar\n");
//     }
// }

int main(int argc)
{
    int numeroAnalista, numeroProjecto;
    char *analistas[10];
    int *salarios[10];

    printf("\n\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("Ingresar datos del analista numero %d: ", i);
        printf("\nIngresar nombre %d: ", i);
        scanf("%s", &analistas[i]);
        printf("\nIngresar salario %d: ", i);
        scanf("%d", &salarios[i]);
    }

    printf("\n\n");

    do
    {
        printf("\nIngrese numero de analista (0 para terminar): ");
        scanf("%d", &numeroAnalista);

        printf("\nIngrese numero del projecto: ");
        scanf("%d", &numeroAnalista);

        printf("\nIngrese cantidad de horas trabajadas: ");
        scanf("%d", &numeroAnalista);

    } while (numeroAnalista != 0);

    printf("\n\nPrograma terminado.....");
}
