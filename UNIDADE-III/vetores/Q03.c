#include <stdio.h>

// void -  sem retorno
// tipo (int, float, double e char)  - retornar um valor


int positivos(int v[]){

    int cont = 0, i;

    for(i=0; i < 4; i++){
        if(v[i] > 0){
            cont++;
        }
    }
    return cont;
}


int main(){

    int v[4], i, resposta;
    
    for(i=0; i < 4; i++){
        printf("Digite o vetor na posicao [%d]: ", i);
        scanf("%d", &v[i]);
    }

    resposta = positivos(v);
    printf("Quantidade de numeros positivos: %d", resposta);

    return 0;
}