// 1) Ingrese 20 valores en un vector e imprimalo ordenado utilizando el algoritmo bubblesort
// (ordenamiento por burbujeo).
// 2) Modifique el programa anterior, para que permita elegir que algoritmo utilizar por medio
// de un menú, puede ser Bubblesort o Quicksort. Deben utilizarse funciones para implementar
// los algoritmos.
// 3) Una consultora tiene 10 analistas y 15 proyectos en los que trabajan indistintamente, a fin
// de mes cada analista eleva una planilla con los siguientes datos
// a. Número de analista
// b. Número de proyecto
// c. Cantidad de hs trabajadas
// En memoria se debera cargar previamente el nombre de los analistas y el valor hora. Se
// desea saber:
// a. Cantidad de hs. trabajadas en total por cada analista.
// b. Total de horas trabajadas por cada analista en cada proyecto.
// c. Total de hs trabajadas sobre cada proyecto.
// d. Qué analista trabajó menos en el proyecto 1.
// e. Sueldo de cada analista.
// f. Nombre del analista que cobró más.
// g. Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los
// proyectos.
// h. Imprimir ordenado en forma descendente por sueldo de los analista:nombre valor
// de la hora y sueldo

#include <stdio.h>
#include <stdlib.h>

int busquedaSecuencial(int array[], int valor)
{
    int i;

    for (i = 1; i < 21; i++)
    {
        if (array[i] == valor)
        {
            return i;
        }
    }
    return -1;
}

int busquedaBinaria(int array[], int n, int valor)
{
    int centro, inf = 0, sup = n - 1;

    while (inf <= sup)
    {
        centro = ((sup - inf) / 2) + inf;

        if (array[centro] == valor)
            return centro;
        else if (valor < array[centro])
            sup = centro - 1;
        else
            inf = centro + 1;
    }
    return -1;
}

int main(int argc)
{
    int actividad = 0;
    int numero[21] = {0};
    int i, x;
    int auxiliar1 = 0;
    int vector[21] = {0};
    int n = 10;
    int valor = 0;
    int seleccion = 0;
    int resultado = 0;
    int numeroDeAnalista = 0;
    int numeroDeProyecto = 0;
    int horasTrabajadas = 0;
    char nombre[11][21] = {"jorge", "francisco", "roberta", "santiago", "romina", "rigoberto", "melissa", "samuel", "ernesto", "juan", "enrique"};
    int valorHora[11] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int vectorHoras[11] = {0};
    int matrizAnalistaProyecto[11][16] = {0};
    int vectorProyectoHoras[16] = {0};
    int nombreMenosHorasProyecto1 = 0;
    int horasMenosTrabajadasProyecto1 = 999;
    int sueldos[11] = {0};
    int analistasMenor5Horas = 0;
    int probar = 0;
    int vectorProbar[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Ingrese que Actividad desea ver (1, 2 o 3) ");
    scanf("%d", &actividad);

    switch (actividad)
    {
    case 1:
        for (i = 1; i < 21; i++)
        {
            printf("Ingrese el numero %d ", i);
            scanf("%d", &numero[i]);
        }
        for (i = 1; i < 21; i++)
        {
            for (x = 1; x < 21; x++)
            {
                if (numero[i] > numero[x])
                {
                    auxiliar1 = numero[i];
                    numero[i] = numero[x];
                    numero[x] = auxiliar1;
                }
            }
        }

        for (i = 1; i < 21; i++)
        {
            printf("%d \n", numero[i]);
        }

        break;

    case 2:
        for (i = 1; i < 21; i++)
        {
            printf("Ingrese el numero %d ", i);
            scanf("%d", &vector[i]);
        }

        printf("Indique el valor a buscar ");
        scanf("%d", &valor);

        printf("Desea usar \n Busqueda secuencial(1) \n Busqueda binaria(2)\n Escriba un numero: ");
        scanf("%d", &seleccion);

        if (seleccion == 1)
        {
            printf("Su valor esta en la posicion %d \n", busquedaSecuencial(vector, valor));
        }
        else if (seleccion == 2)
        {
            printf("Su valor esta en la posicion %d \n", busquedaBinaria(vector, n, valor));
        }

        break;

    case 3:
        printf("Indique numero de analista ");
        scanf("%d", &numeroDeAnalista);

        while (numeroDeAnalista != 0)
        {
            printf("Indica numero de Proyecto ");
            scanf("%d", &numeroDeProyecto);
            printf("Indique horas trabajadas ");
            scanf("%d", &horasTrabajadas);

            if (numeroDeProyecto == 1)
            {
                if (horasTrabajadas < horasMenosTrabajadasProyecto1)
                {
                    horasMenosTrabajadasProyecto1 = horasTrabajadas;
                    nombreMenosHorasProyecto1 = numeroDeAnalista;
                }
            }

            if (horasTrabajadas < 5)
            {
                analistasMenor5Horas++;
            }

            vectorHoras[numeroDeAnalista] += horasTrabajadas;
            matrizAnalistaProyecto[numeroDeAnalista][numeroDeProyecto] += horasTrabajadas;
            vectorProyectoHoras[numeroDeProyecto] += horasTrabajadas;
            sueldos[numeroDeAnalista] += horasTrabajadas * valorHora[numeroDeAnalista];
            printf("Indique numero de analista ");
            scanf("%d", &numeroDeAnalista);
        }

        for (i = 1; i < 11; i++)
        {
            printf("El analista %d trabajo %d horas \n", i, vectorHoras[i]);
        }
        for (i = 1; i < 11; i++)
        {
            for (x = i; x < 16; x++)
            {
                printf("El analista %d en el proyecto %d trabajo %d horas \n", i, x, matrizAnalistaProyecto[i][x]); // punto B
            }
        }
        for (i = 1; i < 16; i++)
        {
            printf("El proyecto %d junto en total %d horas \n", i, vectorProyectoHoras[i]);
        }
        printf("El que tiene menos horas trabajadas es %s con %d horas \n", nombre[nombreMenosHorasProyecto1], horasMenosTrabajadasProyecto1);
        for (i = 1; i < 11; i++)
        {
            printf("El sueldo del analista %d es %d \n", i, sueldos[i]);
        }
        printf("En total %d analistas trabajaron menos de 5 horas en algun proyecto \n", analistasMenor5Horas);

        for (i = 1; i < 11; i++)
        {
            for (x = 1; x < 11; x++)
            {
                if (sueldos[vectorProbar[x]] < sueldos[vectorProbar[x + 1]])
                {
                    probar = vectorProbar[x];
                    vectorProbar[x] = vectorProbar[x + 1];
                    vectorProbar[x + 1] = probar;
                }
            }
        }
        for (i = 1; i < 11; i++)
        {
            printf("%s cobra $%d con $%d valor por hora\n", nombre[vectorProbar[i]], sueldos[vectorProbar[i]], valorHora[vectorProbar[i]]);
        }
        break;
    }
    return 0;
}
