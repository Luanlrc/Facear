#include <stdio.h>

int main(){
    int num;

    printf("Vamos verificar se o numero digitado é par ou impar\n");
    printf("\n");
    printf("Digite um numero:  ");
    scanf("%i", &num);

    if (num % 2 == 0){
        printf("O numero digitado e um numero PAR\n");
    } else {
        printf("O numero digitado e um numero IMPAR\n");
    }

    return 0;
}