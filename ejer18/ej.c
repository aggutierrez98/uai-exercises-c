#include <stdio.h>
#include <stdlib.h>

int maximoIndice(int *a, int n)
{
    if (n <= 0)
        return -1;
    int i, max_i = 0;
    int max = a[0];
    for (i = 1; i < n; ++i)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_i = i;
        }
    }
    return max_i;
}

void main()
{
    int indiceSucursal, indiceProducto;
    int numeroSucursal, codigoProducto, cantidadVendida, totalRecaudado;
    int cantidadPrendasS = 0;
    int sucursalMasVentas;
    int precioFacturaMayor = 0, numeroSucursalMayor = 0, codigoProductoMayor = 0, cantidadMayor = 0;

    int preciosPorProducto[6] = {50, 50, 55, 60, 60, 80};
    int reacaudacionSucursalXProducto[6][6];
    int recaudacionXSucursalTotal[6];
    int prendasVendidasXSucursal[6];

    // Limpio todos los valores
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            reacaudacionSucursalXProducto[i][j] = 0;
        }
        recaudacionXSucursalTotal[i] = 0;
        prendasVendidasXSucursal[i] = 0;
    }

    system("clear");

    printf("Ingrese el numero de sucursal (del 1 al 6 y si es 0 deja de ingresar):   ");
    scanf("%d", &indiceSucursal);

    while (indiceSucursal != 0)
    {
        while (indiceSucursal < 0 || indiceSucursal > 6)
        {
            printf("ERROR: El numero de sucursal ingresado es invalido, Por favor ingresar nuevamente...\n");
            printf("Ingrese el numero de sucursal (del 1 al 6 y si es 0 deja de ingresar):   ");
            scanf("%d", &indiceSucursal);
        };

        printf("Ingrese el codigo de producto (del 1 al 6):  ");
        scanf("%d", &indiceProducto);

        while (indiceProducto < 1 || indiceProducto > 6)
        {
            printf("ERROR: El codigo de producto ingresado es invalido, Por favor ingresar nuevamente...\n");
            printf("Ingrese el codigo de producto (del 1 al 6):   ");
            scanf("%d", &indiceProducto);
        };

        printf("Ingrese la cantidad vendida:  ");
        scanf("%d", &cantidadVendida);

        while (cantidadVendida <= 0)
        {
            printf("ERROR: La cantidad ingresada es invalida, Por favor ingresar nuevamente...\n");
            printf("Ingrese la cantidad vendida:   ");
            scanf("%d", &cantidadVendida);
        };

        numeroSucursal = indiceSucursal - 1;
        codigoProducto = indiceProducto - 1;
        printf("\nCodigo del producto %d", indiceProducto);
        printf("\nPrecio %d", preciosPorProducto[codigoProducto]);

        totalRecaudado = preciosPorProducto[codigoProducto] * cantidadVendida;

        if (codigoProducto == 1)
        {
            cantidadPrendasS = cantidadPrendasS + cantidadVendida;
        }
        recaudacionXSucursalTotal[numeroSucursal] = recaudacionXSucursalTotal[numeroSucursal] + totalRecaudado;
        reacaudacionSucursalXProducto[numeroSucursal][codigoProducto] = reacaudacionSucursalXProducto[numeroSucursal][codigoProducto] + totalRecaudado;
        prendasVendidasXSucursal[numeroSucursal] = prendasVendidasXSucursal[numeroSucursal] + cantidadVendida;

        if (precioFacturaMayor < totalRecaudado)
        {
            precioFacturaMayor = totalRecaudado;
            numeroSucursalMayor = numeroSucursalMayor;
            codigoProductoMayor = codigoProducto;
            cantidadMayor = cantidadVendida;
        }

        printf("\nIngrese el numero de sucursal (del 1 al 6 y si es 0 deja de ingresar):   ");
        scanf("%d", &indiceSucursal);
    };

    int sucursalQueMasVendio = maximoIndice(prendasVendidasXSucursal, 6);

    printf("\n\nLa factura de mayor valor fue la de los siguientes datos:\n");
    printf("\nNumero de sucursal: %d", numeroSucursalMayor);
    printf("\nCodigo del producto: %d", codigoProductoMayor);
    printf("\nCantidad vendida: %d", cantidadMayor);
    printf("\nRecaudo un total de: %d", precioFacturaMayor);

    printf("\n\nSe vendieron un total de %d prendas talle S \n", cantidadPrendasS);
    for (int i = 0; i < 6; i++)
    {
        printf("\nSucursal numero %d", i + 1);
        for (int j = 0; j < 6; j++)
        {
            printf("\nTuvo una recaudacion en el producto %d de: %d", j + 1, reacaudacionSucursalXProducto[i][j]);
        }
        printf("\nRecaudaron en total: %d", recaudacionXSucursalTotal[i]);
        printf("\nVendieron un total de prendas de: %d", prendasVendidasXSucursal[i]);

        printf("\n---------------------------------------------\n");
    }
    printf("\nLa sucursal que mas prendas en total vendio fue la nº: %d", sucursalQueMasVendio + 1);

    printf("\nPresione una tecla para salir... ");
    getchar();
}