#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    int ou_exclusivo = numero1 ^ numero2;
    int ou_bit_a_bit = numero1 | numero2;
    int e_bit_a_bit = numero1 & numero2;

    printf("Resultado do 'OU exclusivo' (^) entre os dois numeros: %d\n", ou_exclusivo);
    printf("Resultado do 'OU bit a bit' (|) entre os dois numeros: %d\n", ou_bit_a_bit);
    printf("Resultado do 'E bit a bit' (&) entre os dois numeros: %d\n", e_bit_a_bit);

    return 0;
}
