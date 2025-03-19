#include <stdio.h>

void main(void){
    int num, ant;

    printf("Digite um numero inteiro, vamos verificar seu sucessor e antecessor\n");
    scanf("%i", &num);

    ant = num - 1;
    num++;

    printf("O antecessor e %i e o sucessor e %i", ant, num);

}