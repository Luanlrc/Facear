#include <stdio.h>

void main(){
    int num, aux;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    for(aux=0; aux < num+1; aux++ ){
        if (aux%2!=0){
            printf("%d\n", aux);
        }
    }
}