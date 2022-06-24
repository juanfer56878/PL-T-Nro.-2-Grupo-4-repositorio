/*
@author: Pool Balbino Ochoa Robalino, Leonardo Sebastian Arevalo Armijos,
 Andersson Leandro Ambuludi Gomez, Juan Fernando Coronel Cardenas y Alejandro Alivar Villamagua Rey.
El algoritmo debe permitir:
- calcular la pendiente y angulo en grados entre dos puntos
*/

#include <stdio.h>
#include <math.h>
int main()

{
     int puntoAX, puntoAY, puntoBX, puntoBY;
     float pendiente, anguloInclinacion, anguloEnRadianes;
     const float Pi = 3.1416;

     printf("Ingrese la coordenada del punto X en A: " );
    scanf("%d", &puntoAX );
     printf("Ingrese la coordenada del punto Y en A: " );
    scanf("%d", &puntoAY);
    printf("Ingrese la coordenada del punto X en B: " );
    scanf("%d", &puntoBX);
    printf("Ingrese la coordenada del punto Y en B: " );
    scanf("%d", &puntoBY);


    pendiente = (puntoBY-puntoAY)/(puntoBX-puntoAX);
    anguloEnRadianes=atan(pendiente);
    anguloInclinacion=(anguloEnRadianes/Pi) *180;

    printf("La pendiente entre los puntos A y B es: %.2f\n", pendiente);
    printf("El angulo de inclinacion en grados entre los puntos A y B es: %.2f\n", anguloInclinacion);
    return 0;
}