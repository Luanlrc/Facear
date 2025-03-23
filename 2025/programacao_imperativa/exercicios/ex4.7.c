#include <stdio.h>
#include <string.h>

int main(){
    float valor, imposto;
    char uf[3];

    printf("Este programa calculara o imposto sobre o produto baseado no estado digitado: \n\n");
    printf("Digite o valor do produto:\n");
    scanf("%f", &valor);

    printf("Os estados disponiveis para calculo de imposto sao:\n");
    printf("MG\nSP\nRJ\nMS\n");

    printf("Digite a sigla de um dos estados disponiveis:\n");
    scanf("%s", uf);

    if (strcmp(uf, "MG") == 0 || strcmp(uf, "mg") == 0) {
        imposto = 7;
    } else if (strcmp(uf, "SP") == 0 || strcmp(uf, "sp") == 0) {
        imposto = 12;
    } else if (strcmp(uf, "RJ") == 0 || strcmp(uf, "rj") == 0) {
        imposto = 15;
    } else if (strcmp(uf, "MS") == 0 || strcmp(uf, "ms") == 0) {
        imposto = 8;
    } else {
        printf("Este valor nao e valido.\n");
        return 1;
    }

    float valor_final = valor + (valor * imposto / 100);
    printf("O imposto para %s e de %.2f%%\n", uf, imposto);
    printf("O valor final do produto sera: R$%.2f\n", valor_final);

    return 0;
}
