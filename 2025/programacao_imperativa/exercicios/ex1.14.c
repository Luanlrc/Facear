#include <stdio.h>

void main(void){
    char carac1, carac2, carac3;

    printf("Digite tres caracteres diferentes, apenas um caracter por exemplo (a)\n");

    printf("Digite o primeiro caracter:\n");
    scanf(" %c", &carac1);

    printf("Digite o segundo caracter:\n");
    scanf(" %c", &carac2);

    printf("Digite o terceiro caracter:\n");
    scanf(" %c", &carac3);

    printf("Os caracteres digitados foram \n %c \n %c \n %c", carac1, carac2, carac3);
}