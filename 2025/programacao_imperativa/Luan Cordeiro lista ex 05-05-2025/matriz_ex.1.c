#include <stdio.h>
int main() {
    int matriz[3][3], soma = 0;
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite um valor para a posicao [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        soma += matriz[i][2 - i];
    }
    printf("Soma da diagonal secundaria e: %d\n", soma);
    return 0;
}