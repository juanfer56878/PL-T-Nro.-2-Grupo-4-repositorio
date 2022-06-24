/*
@author: Pool Balbino Ochoa Robalino, Leonardo Sebastian Arevalo Armijos,
 Andersson Leandro Ambuludi Gomez, Juan Fernando Coronel Cardenas y Alejandro Alivar Villamagua Rey.
El algoritmo debe permitir:
- calcular el valor a cobrar por la alberca:
*/
#include <stdio.h>
#include <math.h>
#define Costo 1.25
int main()
{

    float profundidad, largo, ancho, volumen, pago;

    printf("Ingrese el valor del ancho en metros de su alberca: \n");
    scanf("%f", &ancho);
    printf("Ingrese el valor del largo en metros de su alberca: \n");
    scanf("%f", &largo);
    printf("Ingrese el valor de la profunidad en metros de su alberca: \n");
    scanf("%f", &profundidad);

    volumen = ancho * largo * profundidad;
    pago = volumen * Costo;

    printf("\n El valor a pagar para usted es por su alberca es: $%.2f \n", pago);

    getchar(); // Limpieza de flujo de entrada

    return 0;
}