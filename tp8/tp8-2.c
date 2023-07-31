// El enunciado es:

// Una empresa desea procesar las ventas que efectúa conociendo los siguientes datos:
// •	número de factura
// •	código de articulo
// •	cantidad vendida
// •	precio unitario

// En cada factura sólo se vende un tipo de artículo, los artículos son 6 y los datos finalizan con número de factura = 0

// Se pide:
// A.   cantidad de facturas emitidas *
// B.   monto de cada factura *
// C.   suma de las facturas (caja diaria) *
// D.   cantidad total de artículos vendidos *
// E.   cantidad vendida de cada artículo *
// F.   cantidad de facturas emitidas para cada artículo *
// G.   promedio de importe de las facturas
// H.   porcentual que representa el monto total de cada artículo sobre el total *
// I.   saber si se vendió el artículo 4 (utilizar algoritmo de búsqueda binaria).

#include <stdio.h>
#include <stdlib.h>

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

int ordenarArray(int *array, int elementos)
{
    int i;
    int j;
    int aux_elem;
    int movimientos;

    movimientos = 0;

    for (int i = 0; i < elementos - 1; i++)
    {
        for (j = 1; j < elementos; j++)
        {
            if (array[j] < array[j - 1])
            {
                aux_elem = array[j];
                array[j] = array[j - 1];
                array[j - 1] = aux_elem;
                movimientos++;
            }
        }
    }

    return movimientos;
}

int main(int argc)
{
    int codigoArticulo;
    int cantidadVendida;
    int numeroFactura;
    int numeroDeFacturas = 0;
    int sumaFacturas = 0;
    int totalArticulosVendidos = 0;
    int numerosFacturas[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int codigosFacturas[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int cantidadFacturas[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int montoFacturas[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int preciosArticulos[6] = {50, 20, 100, 80, 75, 35};
    int cantidadVendidaXArticulo[6] = {0, 0, 0, 0, 0, 0};
    int cantidadEmitidasXArticulo[6] = {0, 0, 0, 0, 0, 0};
    float montoXArticulo[6] = {0, 0, 0, 0, 0, 0};
    float porcentajeXArticulo[6] = {0, 0, 0, 0, 0, 0};
    float promedioImportes;

    printf("\nIngresar numero de factura (si es 0 se sale, maximo se emiten 10 facturas): ");
    scanf("%d", &numeroFactura);

    while (numeroFactura != 0 && numeroDeFacturas <= 10)
    {

        printf("\nIngresar codigo de articulo (entre 1 y 6): ");
        scanf("%d", &codigoArticulo);

        while (codigoArticulo < 1 || codigoArticulo > 6)
        {
            printf("\nERROR: Codigo de articulo invalido, ingresar nuevamente...\n");
            printf("\nIngresar codigo de articulo (entre 1 y 6): ");
            scanf("%d", &codigoArticulo);
        }

        printf("\nIngresar cantidad vendida: ");
        scanf("%d", &cantidadVendida);

        numerosFacturas[numeroDeFacturas] = numeroFactura;
        codigosFacturas[numeroDeFacturas] = codigoArticulo;
        cantidadFacturas[numeroDeFacturas] = cantidadVendida;
        montoFacturas[numeroDeFacturas] = preciosArticulos[codigoArticulo] * cantidadVendida;
        numeroDeFacturas++;

        printf("\nIngresar numero de factura (si es 0 se sale, maximo se emiten 10 facturas): ");
        scanf("%d", &numeroFactura);
    }

    for (int i = 0; i < numeroDeFacturas; i++)
    {
        sumaFacturas = montoFacturas[i] + sumaFacturas;
        totalArticulosVendidos = cantidadFacturas[i] + totalArticulosVendidos;
        cantidadEmitidasXArticulo[codigosFacturas[i] - 1]++;
        cantidadVendidaXArticulo[codigosFacturas[i] - 1] = cantidadFacturas[i] + cantidadVendidaXArticulo[codigosFacturas[i] - 1];
        montoXArticulo[codigosFacturas[i] - 1] = montoFacturas[i] + montoXArticulo[codigosFacturas[i] - 1];
    }

    promedioImportes = sumaFacturas / numeroDeFacturas;

    for (int i = 0; i < 6; i++)
    {
        porcentajeXArticulo[i] = (float)(montoXArticulo[i] / sumaFacturas) * 100;
    }

    ordenarArray(codigosFacturas, 10);
    int seVendioEL4 = busquedaBinaria(codigosFacturas, 10, 4);

    printf("\nSe emitieron %d facturas", numeroDeFacturas);
    printf("\nLa caja diaria es de: $%d", sumaFacturas);
    printf("\nLa cantidad total de articulos vendidos es de: %d", totalArticulosVendidos);

    for (int i = 0; i < numeroDeFacturas; i++)
    {
        printf("\nEl monto de la factura %d es de: $%d", i + 1, montoFacturas[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\n\nPara el articulo %d se vendieron %d unidades", i + 1, cantidadVendidaXArticulo[i]);
        printf("\nPara el articulo %d se emitieron %d facturas", i + 1, cantidadEmitidasXArticulo[i]);
        printf("\nEl articulo %d representa un %%%.2f del total de la venta", i + 1, porcentajeXArticulo[i]);
    }

    printf("\n\nEl promedio del importe de las facturas es de: $ %f", promedioImportes);

    if (seVendioEL4 != -1)
    {
        printf("\nEl articulo 4 fue vendido!!");
    }
    else
    {
        printf("\nEl articulo 4 NO fue vendido¡¡");
    }

    printf("\n\nPrograma terminado.....");

    return 0;
}