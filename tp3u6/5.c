// Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir
// cuántos montos superan los $ 40 y del total cobrado que porcentaje
// representa la suma de los que superan los $40

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char patente[6];
    int superancuarenta = 0;
    float totalCobrado = 0, sumaDeSuperadores, monto;
    system("clear");

    for (int i = 0; i < 50; i++)
    {
        printf("Ingrese la patente: ");
        scanf("%s", patente);

        printf("Ingrese el monto: ");
        scanf("%f", &monto);

        totalCobrado += monto;

        if (monto >= 40)
        {
            superancuarenta++;
            sumaDeSuperadores += monto;
        }
    }

    float porcentaje = (sumaDeSuperadores / totalCobrado) * 100;

    printf("\nLa cantidad de autos que superan monto de $40 es de: %d", superancuarenta);
    printf("\nLa suma de los que superan cuarenta sobre el total es de: %f", porcentaje);

    printf("\n\n");
    getchar();
}