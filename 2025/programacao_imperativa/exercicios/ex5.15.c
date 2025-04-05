#include <stdio.h>

int main() {
    int num, maior, menor;
    printf("Digite um numero: \n(negativo para sair): ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Nenhum numero foi digitado.\n");
        return 0;
    }

    maior = menor = num;

    while (1) {
        printf("Digite um numero: \n(negativo para sair): ");
        scanf("%d", &num);
        if (num < 0) break;
        if (num > maior) maior = num;
        if (num < menor) menor = num;
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
