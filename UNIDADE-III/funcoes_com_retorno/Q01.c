#include <stdio.h>

float calcularMedia(float nota1, float nota2){
    return (nota1 + nota2)/2;
}

int verificarSituacao(float media){
    if(media >= 7.0){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    float nota1, nota2, media;
    int situacao;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = calcularMedia(nota1, nota2);
    situacao = verificarSituacao(media);

    printf("\n Media do aluno: %.1f\n", media);

    if(situacao == 1){
        printf("Aluno aprovado");
    }else{
        printf("Aluno reprovado");
    }
    return 0;
}