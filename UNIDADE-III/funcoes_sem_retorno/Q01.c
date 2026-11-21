#include <stdio.h>

void verificarPrimo(int n){

    int i, primo = 1;

    if(n < 2){
        primo = 0;
    }else{
        for(i = 2; i * i <= n; i++){
            if(n % i == 0){
                primo = 0;
                break;
            }
        }
    }

    if(primo){
       printf("O valor %d eh primo", n); 
    }else{
        printf("O valor %d nao eh primo", n);
    }
}


int main(){

    int numero;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &numero);
    verificarPrimo(numero);

    return 0;
}