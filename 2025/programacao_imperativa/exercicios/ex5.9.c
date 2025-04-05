#include <stdio.h>

int main() {
    int i, num, menor, maior;

    printf("Digite um numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    for (i = 1; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num < menor) menor = num;
        if (num > maior) maior = num;
    }

    printf("Menor: %d\nMaior: %d\n", menor, maior);
    return 0;
}
