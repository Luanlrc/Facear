#include <stdio.h>
#include <time.h>

void main(void){
    float valor, dolar;

    printf("Vamos converter um valor em real para dolar\n");
    printf("Digite o valor a ser convertido: \n");
    scanf("%f", &valor);
    printf("Agora digite a cotacao do dolar");
    scanf("%f", &dolar);

    printf("Valor digitado em dolar e: %.2f", valor/dolar);

}
