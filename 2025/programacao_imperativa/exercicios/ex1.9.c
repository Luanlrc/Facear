#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite dois numeros inteiros vou mostrar na ordem inversa \n");
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);

    printf("Os numeros digitados foram %f e %f", num2, num1);
    return 0;
}