#include<stdio.h>
#include<math.h>

void main(void){
    float a, b;

    printf("Vamos uma hipotenusa\n Digite o primeiro valor:\n");
    scanf("%f", &a);

    printf("Agora digite o segundo valor: \n");
    scanf("%f", &b);

    printf("O resultado do calculo da hipotenusa e:\n %.2f", sqrt(pow(a,2)+pow(b,2)));
}