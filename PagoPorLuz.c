#include <stdio.h>
#include <stdlib.h>

#define RubroPreservacionMedioAmbiente 0.07
#define AlumbradoPublico 1.5

int main()
{
    system("cls");
    
    float LecturaConsumoKw, PrecioKw, ConsumoEnergiaElectrica, PreservacionMedioAmbiente, PagoTotal;
    
    printf("Ingrese el valor del consumo del medidor: ");
    scanf("%f", &LecturaConsumoKw);

    printf("Ingrese el valor del precio por Kw: ");
    scanf("%f", &PrecioKw);

    getchar();

    ConsumoEnergiaElectrica = LecturaConsumoKw * PrecioKw;
    PreservacionMedioAmbiente = ConsumoEnergiaElectrica * RubroPreservacionMedioAmbiente;
    PagoTotal = ConsumoEnergiaElectrica + AlumbradoPublico + PreservacionMedioAmbiente;
    printf("Valor del Consumo por la Energia Electrica: %.2f\n", ConsumoEnergiaElectrica);
    printf("Valor del alumbrado publico:  %.2f\n", AlumbradoPublico);
    printf("Valor de la Preservacion del Medio ambiente:  %.2f\n", PreservacionMedioAmbiente);
    printf("Total a pagar por el cliente:$%.2f\n", PagoTotal);

    getchar();
    return 0;
}