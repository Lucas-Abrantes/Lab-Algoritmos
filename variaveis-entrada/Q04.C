#include <stdio.h>

int main(){

    float velocidade_kmh, velocidade_ms;

    printf("Informe a velocidade em km/h: ");
    scanf("%f", &velocidade_kmh);

    velocidade_ms = velocidade_kmh/3.6;

    printf("Valocidade em m/s: %.2f\n", velocidade_ms);

    return 0;
}