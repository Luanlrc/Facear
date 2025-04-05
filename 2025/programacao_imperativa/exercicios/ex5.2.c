#include <stdio.h>

void main(){
    int num, aux;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    for(aux=0; num > aux; num-- ){
        printf("%d\n", num);
    }
}