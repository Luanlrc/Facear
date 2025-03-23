#include<stdio.h>
#include<math.h>

void main(void){
    float raio, pi;
    pi = 3.141592;

    printf("Vamos calcular a area de um circulo \n Digite o valor do raio:");
    scanf("%f", &raio);

    printf("A area do circulo e: %.2f", pi * pow(raio,2));
}