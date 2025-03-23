#include <stdio.h>

int main(void) {
    char letraMaiuscula, letraMinuscula;

    printf("Digite uma letra maiuscula: \n");
    scanf("%c", &letraMaiuscula);

    if (letraMaiuscula >= 'A' && letraMaiuscula <= 'Z') {
        letraMinuscula = letraMaiuscula + 32;
        printf("A letra minuscula correspondente e: %c\n", letraMinuscula);
    } else {
        printf("Erro: Voce nao digitou uma letra maiuscula!\n");
    }

    return 0;
}
