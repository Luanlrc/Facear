#include <stdio.h>

int main() {
    int cont = 1;
    int pares_somados = 0;
    int soma = 0;

    while (pares_somados < 50) {
        if (cont % 2 == 0) {
            soma = soma + cont;
            pares_somados++;
        }
        cont++;
    }

    printf("A soma dos 50 primeiros numeros pares maiores que 0 u: %d\n", soma);

    return 0;
}
