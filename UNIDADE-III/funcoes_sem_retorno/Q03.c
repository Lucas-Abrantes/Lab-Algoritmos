#include <stdio.h>

void calcularMedia(float nota1, float nota2);

int main(){

    int quantidade, i;
    float nota1, nota2;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    printf("\n");

    for(i = 1; i <= quantidade; i++){
        printf("\n");
        printf("\n Aluno %d\n", i);
        printf("\n");

        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("\n");

        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        printf("\n");

        calcularMedia(nota1, nota2);
    }
    return 0;
}


void calcularMedia(float nota1, float nota2){
    float media;

    media = (nota1 + nota2)/2;
    printf("\n");
    printf("Media do aluno: %.1f", media);
    printf("\n");

    if(media >= 7){
        printf("SITUACAO: APROVADO\n");
        printf("\n");

    }else{
        printf("SITUCAO: REPROVADO\n");
        printf("\n");
    }
}
