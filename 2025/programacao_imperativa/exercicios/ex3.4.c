#include <stdio.h>

void main(void){
    float num1,num2,num3,num4, media;

    printf("Vamos calcular a media aritimetica de 4 numeros reais: \n");
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: \n");
    scanf("%f", &num3);
    printf("Digite o quarto numero: \n");
    scanf("%f", &num4);

    media = (num1+num2+num3+num4) / 4;

    printf("A media dos numeros digitados e %f", media);

}