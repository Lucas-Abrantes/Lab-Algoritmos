#include <stdio.h>

void posicoes(int v[], int n){

    int i = 0, cont = 0;

    for(i = 0; i < 4; i++){
        if(v[i] == n){
            printf("Posicao [%d]\n", i);
            cont++;
        }
    }

    printf("\n");
    printf("Quantidade encontrada: %d", cont);
}

int main(){
   
    int v[4], i, n;

    for(i=0; i < 4; i++){
        printf("Vetor na posicao [%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("\n");
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    posicoes(v, n);

    return 0;
}