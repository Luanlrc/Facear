#include <stdio.h>

void main(void){
    int num1,num2,num3, soma;

    printf("Vamos somar 3 numeros inteiros: \n");
    printf("Digite o primeiro numero: \n");
    scanf("%i", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%i", &num2);
    printf("Digite o terceiro numero: \n");
    scanf("%i", &num3);

    soma = num1+num2+num3;

    printf("A soma dos numeros digitados e %i", soma);

}