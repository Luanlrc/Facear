#include <stdio.h>

void main(void){
    char caracter;

    printf("Digite apenas um caracter por exemplo (a)\n");
    scanf("%c", &caracter);

    printf("O caracter digitado foi \"%c\"", caracter);
}