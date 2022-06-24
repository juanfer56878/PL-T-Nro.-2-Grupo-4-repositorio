/*
@author: Pool Balbino Ochoa Robalino, Leonardo Sebastian Arevalo Armijos,
 Andersson Leandro Ambuludi Gomez, Juan Fernando Coronel Cardenas y Alejandro Alivar Villamagua Rey.
El algoritmo debe permitir:
-calcular la transferencia total recibida de euros a dolares, el valor de la comisión 
que ha cobrado el banco (Débito) y el monto real que recibiría el cliente.
*/
#include <stdio.h>
int main()

{
    float euros, dolares, dolaresReales, comision;
    printf("Ingrese el valor en euros:");
    scanf("%f", &euros);
    getchar();
    dolares = euros * 1.05;
    comision = dolares * 0.05;
    dolaresReales = dolares - comision;
    printf("La transferencia total transformada a dolares es:$%.2f\n", dolares);
    printf("El valor de comison acogido por el banco es:$%.2f\n", comision);
    printf("El monto real ha recibir en total es:$%.2f\n", dolaresReales);
    return 0;
}