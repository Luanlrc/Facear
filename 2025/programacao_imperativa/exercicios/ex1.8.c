#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros vou mostrar na ordem inversa \n");
    printf("Digite o primeiro numero: \n");
    scanf("%i", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%i", &num2);

    printf("Os numeros digitados foram %i e %i", num2, num1);
    return 0;
}