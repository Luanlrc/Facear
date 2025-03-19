#include <stdio.h>

void main(void){
    float num, part;

    printf("Digite um numero real, vamos verificar sua quinta parte\n");
    scanf("%f", &num);

    part = num / 5;

    printf("A quinta parte do numero e: %f", part);

}