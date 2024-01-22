#include <stdio.h>

int main() {
    float presupuesto, cotizacion, mejorcotizacion, minima, maxima, sumacotizaciones, promedio;

    do {
        printf("Ingrese el presupuesto: ");
        scanf("%f", &presupuesto);
        if (presupuesto <= 0) {
            printf("Error: Es un presupuesto invalido. Intente de nuevo.\n");
        }
    } while (presupuesto <= 0);

    minima = 9999999999;
    maxima = 0;
    sumacotizaciones = 0;
    mejorcotizacion = 0;

    for (int i = 1; i <= 5; i++) {
        do {
            printf("Ingrese la cotizacion %d: ", i);
            scanf("%f", &cotizacion);
            if (cotizacion <= 0) {
                printf("Error: La cotizacion es invalida. Intente de nuevo.\n");
            }
        } while (cotizacion <= 0);

        if (cotizacion < minima) {
            minima = cotizacion;
        }
        if (cotizacion > maxima) {
            maxima = cotizacion;
        }

        if (cotizacion <= presupuesto && cotizacion > mejorcotizacion) {
            mejorcotizacion = cotizacion;
        }

        sumacotizaciones += cotizacion;
    }

    promedio = (sumacotizaciones - minima - maxima) / 3;

    printf("La cotizacion más baja es: %.2f\n", minima);
    printf("La cotizacion más alta es: %.2f\n", maxima);
    printf("Las cotizaciones que se elimnan son: %.2f y %.2f\n", minima, maxima);
    printf("El promedio de las cotizaciones restantes es: %.2f\n", promedio);

    return 0;
}
