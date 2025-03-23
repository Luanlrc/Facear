#include <stdio.h>

int main() {
    float altura, peso;
    char classificacao;

    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);
    printf("Digite o peso da pessoa (em kg): ");
    scanf("%f", &peso);

    if (altura < 1.20) {
        if (peso <= 60) {
            classificacao = 'A';
        } else if (peso <= 90) {
            classificacao = 'D';
        } else {
            classificacao = 'G';
        }
    } else if (altura <= 1.70) {
        if (peso <= 60) {
            classificacao = 'B';
        } else if (peso <= 90) {
            classificacao = 'E';
        } else {
            classificacao = 'H';
        }
    } else {
        if (peso <= 60) {
            classificacao = 'C';
        } else if (peso <= 90) {
            classificacao = 'F';
        } else {
            classificacao = 'I';
        }
    }

    printf("A classificacao da pessoa e: %c\n", classificacao);

    return 0;
}
