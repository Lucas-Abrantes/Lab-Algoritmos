#include <stdio.h>

void padrao(int n){

    char matriz[n][n];
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            // Sendo i = 1;

            // i == 0 || i == n - 1, sendo n = 5
            // i == 0 || i == 5 - 1
            // i == 0 || i == 4
            // i == 0 (F) || 1 == 4 (F)
            // F or F = F
            if(i == 0 || i == n - 1){
                matriz[i][j] = 'X';
            }else{
                matriz[i][j] = 'o';
            }
        }
    }

     for(i = 0; i <= n; i++){
        for(j = 0; j < n; j++){
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