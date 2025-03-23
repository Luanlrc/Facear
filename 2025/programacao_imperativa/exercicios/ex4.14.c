#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if ((numero % 3 == 0 || numero % 5 == 0) && !(numero % 3 == 0 && numero % 5 == 0)) {
        printf("O numero %d e divisivel por 3 ou 5, mas nao pelos dois.\n", numero);
    } else {
        printf("O numero %d nao atende a condicao.\n", numero);
    }

    return 0;
}