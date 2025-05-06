#include <stdio.h>

int main() {
    char palavra[100];
    char invertida[100];
    int tamanho = 0;
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    for (i = 0; i < tamanho; i++) {
        invertida[i] = palavra[tamanho - 1 - i];
    }
    invertida[tamanho] = '\0';

    for (i = 0; i < tamanho; i++) {
        if (palavra[i] != invertida[i]) {
            printf("Nao e um palindromo.\n");
            return 0;
        }
    }

    printf("E um palindromo.\n");
    return 0;
}
