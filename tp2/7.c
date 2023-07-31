#include <stdio.h>
#include <stdlib.h>

// Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo
// conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150
// hs le dan otros $ 100 adicionales. Imprimir el sueldo

void main()
{
    int valorHora, tiempoTrabajado, bono = 0;
    system("clear");
    printf("Ingrese el valor de la hora: ");
    scanf("%d", &valorHora);
    printf("Ingrese el tiempo trabajado: ");
    scanf("%d", &tiempoTrabajado);
    if (tiempoTrabajado > 50)
    {
        bono += 100;
    }
    else if (tiempoTrabajado > 150)
    {
        bono += 100;
    }
    printf("\nSu sueldo es de: $%d", (valorHora * tiempoTrabajado + bono));
    printf("\nPresione una tecla para salir... ");
    getchar();
}