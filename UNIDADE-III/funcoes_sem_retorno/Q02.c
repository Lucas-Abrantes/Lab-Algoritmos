#include <stdio.h>

void exibirPares(int n);

int main(){

    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    exibirPares(n);

    return 0;
}

void exibirPares(int n){

    int soma = 0, i;

    for(i = 2; i <= n; i+=2){
        printf("%d \n", i);
        soma += i;
    }
    printf("\n");
    printf("Soma de todos os valores pares: %d", soma);
}