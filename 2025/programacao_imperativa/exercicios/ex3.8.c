#include <stdio.h>
#include <time.h>

void main(void){
    float celcius;

    printf("Vamos converter um valor em Celcius para Fahrenheit\n");
    printf("Digite o valor em Celcius: \n");
    scanf("%f", &celcius);

    printf("Valor digitado convertido para Fahrenheit e: %.2f", (celcius * (9.0/5.0))+32);

}
