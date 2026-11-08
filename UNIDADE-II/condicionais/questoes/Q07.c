#include <stdio.h>

int main(){

    int valor_1, valor_2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor_1);

    printf("\n");

    printf("Digite o segundo valor: ");
    scanf("%d", &valor_2);

    if(valor_1 > valor_2){
        // 10 > 10 -> 0
        printf("O maior numero eh: %d\n", valor_1);
    }else if(valor_2 > valor_1){
        printf("O maior valor eh: %d\n", valor_2);
    }else{
        printf("Os dois valores sao iguais\n");
    }

    return 0;
}