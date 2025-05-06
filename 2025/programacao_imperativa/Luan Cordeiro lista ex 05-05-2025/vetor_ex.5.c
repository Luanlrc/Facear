#include <stdio.h>
int main() {
    int vetor[8], x, y;
    int i;
    for(i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero da posicao X de 0 ate 7: ");
    scanf("%d", &x);
    printf("Digite o numero da posicao Y de 0 ate 7: ");
    scanf("%d", &y);
    printf("Soma dos valores nas posicoes X e Y: %d\n", vetor[x] + vetor[y]);
    return 0;
}