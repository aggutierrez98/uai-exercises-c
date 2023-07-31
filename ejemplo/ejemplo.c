// 3. Una empresa desea procesar las ventas que efectúa
// conociendo los siguientes datos:
// número de factura
// código de articulo
// cantidad vendida
// precio unitario
// en cada factura sólo se vende un tipo de artículo,
// los artículos son 6 y los datos finalizan con número
// de factura = 0. Se pide:
//  A. cantidad de facturas emitidas
//  B. monto de cada factura
//  C. suma de las facturas (caja diaria)
//  D. cantidad total de artículos vendidos
//  E. cantidad vendida de cada artículo
//  F. cantidad de facturas emitidas para cada artículo
//  G. promedio de importe de las facturas
//  H. porcentual que representa el monto total de cada artículo sobre el total

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numeroDeFactura, codigoDeArticulo, cantidadVendida;
    float valor;

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

    do
    {
        printf("Ingrese un valor (en caso de no querer ingresar mas ingrese 0): ");
        scanf("%f", &valor);

        if (valor < 0)
        {
            cantidadNegativos++;
        }
        else if (valor == 0)
        {
            cantidadCeros++;
        }
        else if (valor > 0)
        {
            cantidadPositivos++;
        }

    } while (valor != 0);

    float cantidadTotal = cantidadNegativos + cantidadCeros + cantidadPositivos;

    // printf("\nCantidad total: %d", cantidadTotal);

    printf("\nPromedio de Ceros:  %.2f", (cantidadCeros / cantidadTotal) * 100);
    printf("\nPromedio de Menores a cero: %.2f", (cantidadNegativos / cantidadTotal) * 100);
    printf("\nPromedio de Mayores a cero: %.2f", (cantidadPositivos / cantidadTotal) * 100);

    printf("\n\nPresione una tecla para salir... ");
    getchar();
}