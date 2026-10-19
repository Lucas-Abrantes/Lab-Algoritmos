#include <stdio.h>
#include <math.h>

int main(){

    float numero, resultado;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // (-2.5 > 0 ) -> 0
    if(numero > 0){
        // verificar se é maior do 0: 0 ou 1
        resultado = sqrt(numero);
        printf("Raiz do numero: %.2f\n", resultado);
    }
    else{
        resultado = numero * numero;
        printf("Quadrado do numero: %.2f", resultado);
    }

    return 0;

}