#include <stdio.h>

void main(void){
    int num1, num2, num3;

    printf("Digite o dia de seu nascimento representado por um numero inteiro\n");
    scanf("%i", &num1);
    printf("Digite o mes de seu nascimento representado por um numero inteiro\n");
    scanf("%i", &num2);
    printf("Digite o ano de seu nascimento representado por um numero inteiro\n");
    scanf("%i", &num3);

    printf("Voce nasceu em %i/%i/%i", num1,num2,num3);
}