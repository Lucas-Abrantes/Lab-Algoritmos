#include <stdio.h>


int main(){

    int idade, maiores = 0, continuar;

    do{
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        if(idade >= 18){
            maiores++;
        }
        printf("Deseja continuar? (1 - sim / 0 - nao)\n");
        scanf("%d", &continuar);

    }while (continuar == 1);
    
    printf("\n");

    printf("Quantidade de pessoas acima de 18 anos: %d", maiores);

    return 0;
}