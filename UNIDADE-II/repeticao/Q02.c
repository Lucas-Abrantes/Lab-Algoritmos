#include <stdio.h>


int main(){


    int n = 1;
    int valor;

    printf("Digite o valor da tabuada: ");
    scanf("%d", valor);

    while(n <= 10){
        printf(" %d * %d = %d\n",valor, n, valor * n);
        n = n + 1;
    }

    return 0;
}