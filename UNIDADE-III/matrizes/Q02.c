#include <stdio.h>

void padrao(int n){

    int matriz[n][n];
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            matriz[i][j] = j;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
 
    int n;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    padrao(n);
    return 0;
}