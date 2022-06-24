/*
@author: Pool Balbino Ochoa Robalino, Leonardo Sebastian Arevalo Armijos,
 Andersson Leandro Ambuludi Gomez, Juan Fernando Coronel Cardenas
  y Alejandro Alivar Villamagua Rey.
El algoritmo debe permitir:
-calcular el area y radio de una misma circunferencia ,con solo el valor del diametro.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.1416

int main()
{
    float area, radio, diametro;

    printf("Ingrese el valor del diametro de su circunferencia: ");
    scanf("%f", &diametro);

    radio = diametro / 2;
    area = PI * powf(radio, 2);
    printf("El el valor del radio obtenido por su diametro es: %.2f\n", radio);
    printf("El el valor del area es: %.2f\n", area);

    return 0;
}