#include <stdio.h>


int main(){

    int n, i;
    int soma = 0;
    int produto = 1;

    printf("Digite o numero n: ");
    scanf("%d", &n);

    printf("\n");

    for(i = 1; i <= n; i++){
        // soma = soma + i;
        soma += i;
        produto *= i;
    }

    printf("\n");

    printf("Valor da soma: %d\n", soma);
    printf("\n");
    printf("Valor do produto: %d", produto);

    return 0;
}