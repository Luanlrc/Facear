#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    float valor, imposto;
    char uf[3];

    printf("Este programa calculara o imposto sobre o produto baseado no estado digitado: \n");
    printf("\n");

    printf("Digite o valor do produto:\n");
    scanf("%c", &valor);

    printf("Os estados disponiveis para calculo de imposto são:\n");
    printf("MG\n");
    printf("SP\n");
    printf("RJ\n");
    printf("MS\n");
    printf("Digite a sigla de um dos estados disponiveis:\n");
    scanf("%s", &uf);

    if (uf == 'mg' || uf == 'MG'){
        imposto = 7;
    }
    if (uf == 'sp' || uf == 'SP'){
        imposto = 7;
    }
    if (uf == 'rj' || uf == 'RJ'){
        imposto = 7;
    }
    if (uf == 'ms' || uf == 'MS'){
        imposto = 7;
    }
    else

    printf("Este valor nao e valido");

    return 0;
}