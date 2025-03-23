#include <stdio.h>

int main(void) {
    int numero, centenas, dezenas, unidades, numeroInvertido;

    printf("Digite um numero inteiro positivo de tres digitos\n E iremos inverte-los\n: ");
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) {
        unidades = numero % 10;           // Extrai a unidade
        dezenas = (numero / 10) % 10;     // Extrai a dezena
        centenas = (numero / 100) % 10;   // Extrai a centena

        numeroInvertido = unidades * 100 + dezenas * 10 + centenas;

        printf("Numero gerado: %d\n", numeroInvertido);
    } else {
        printf("Erro: O número não tem tres digitos!\n");
    }

    return 0;
}
