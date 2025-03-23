#include <stdio.h>
#include <time.h>

void main(void){
    float graus, pi;
    pi = 3.141592;

    printf("Vamos converter um valor de um angulo em graus para radiano\n");
    printf("Digite o valor em graus: \n");
    scanf("%f", &graus);

    printf("Valor digitado convertido radiano e: %.2f", graus * pi/180.0);

}
