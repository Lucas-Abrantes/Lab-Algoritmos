#include <stdio.h>


int main(){

    int n, i;
    double soma = 0;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        soma = soma + 1.0/i;
    }

    printf("\n");
    printf("Valor da soma S: %.4g", soma);

    return 0;
}