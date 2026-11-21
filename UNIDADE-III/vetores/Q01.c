#include <stdio.h>

void inverso(){
    int n, i;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int v[n];

    for(i=0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    printf("\n");

    for(i = n -1; i >= 0; i--){
        printf("%d\n", v[i]);
        // i = n - 1   sendo n = 4
        // i = 4 - 1
        // i = 3
    }
}

int main(){
    inverso();
    return 0;
}