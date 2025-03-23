#include <stdio.h>
#include <time.h>

void main(void){
    float velocidade, metros;

    printf("Digite o valor de uma velocidade em km/h, \nvamos convertela para metros por segundo\n");
    scanf("%f", &velocidade);

    metros = velocidade / 3.6;

    printf("O valor de %.2f km/h em m/s e %.2f\n", velocidade, metros);

}
