#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z, opcao;
    float media;

    printf("Digite tres numeros inteiros positivos:\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("Escolha o tipo de media:\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        media = x * y * z;
    } 
    else if (opcao == 2) {
        media = (x + 2 * y + 3 * z) / 6.0;
    } 
    else if (opcao == 3) {
        media = 1.0 / ((1.0 / x) + (1.0 / y) + (1.0 / z));
    } 
    else if (opcao == 4) {
        media = (x + y + z) / 3.0;
    } 
    else {
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("O resultado da media escolhida e: %.2f\n", media);

    return 0;
}
