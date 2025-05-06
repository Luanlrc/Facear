#include <stdio.h>
int main() {
    int matriz[3][3], soma[3] = {0};
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite um numero inteiro para a posicao [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma[j] += matriz[i][j];
        }
    }
    printf("Soma de cada coluna:\n");
    for(j = 0; j < 3; j++) {
        printf("Coluna %d: %d\n", j, soma[j]);
    }
    return 0;
}