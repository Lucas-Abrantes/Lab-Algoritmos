#include <stdio.h>

void padrao(int n){

    char matriz[n][n];
    int i, j;

    for(i = 0; i < n; i++){
        for(j=0; j <= i; j++){
            matriz[i][j] = '*';
        }
    }

    for(i = 0; i < n; i++){
        for(j=0; j <= i; j++){
           printf("%c", matriz[i][j]);
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