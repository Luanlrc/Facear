#include<stdio.h>
#include<math.h>

void main(void){
    float raio, pi, altura;
    pi = 3.141592;

    printf("Vamos calcular o volume de um cilindro circular \n Digite o valor do raio:\n");
    scanf("%f", &raio);

    printf("Agora digite a altura do cilindro: \n");
    scanf("%f", &altura);

    printf("O volume do cilindro e: %.2f", pi * pow(raio,2) * altura);
}